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
    int iCount=0;
    while(First != NULL)
    {
        iCount++;
        First=First->next;
    }
    return iCount;
}

int main()
{
    PNODE Head=NULL;
    int iRet=0;

    InsertFirst(&Head,45);
    InsertFirst(&Head,78);
    Display(Head);
    iRet=Count(Head);
    printf("Number of elements are: %d",iRet);

    return 0;
}