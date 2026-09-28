#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *prev;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE First, int iNo)
{
    PNODE newn=NULL;

    newn=(PNODE)malloc(sizeof(NODE));

    newn->data=iNo;
    newn->prev=NULL;
    newn->next=NULL;

    if(*First == NULL)
    {
        *First=newn;
    }
    else
    {
        (*First)->prev=newn;
        newn->next=*First;
        *First=newn;
    }
}

void Display(PNODE First)
{
    printf("NULL<=>");
    while(First != NULL)
    {
        printf("%d<=>",First->data);
        First=First->next;
    }
    printf("NULL\n");
}

int Count(PNODE First)
{
    return 0;
}

int main()
{
    PNODE Head=NULL;

    InsertFirst(&Head,45);
    InsertFirst(&Head,78);
    Display(Head);

    return 0;
}