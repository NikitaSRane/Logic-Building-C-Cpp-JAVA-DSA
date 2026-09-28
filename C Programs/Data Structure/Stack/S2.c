#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node * next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void Push(PPNODE First, int iNo)
{
    PNODE newn=NULL;

    newn=(PNODE)malloc(sizeof(NODE));
    newn->data=iNo;
    newn->next=NULL;

    if(*First == NULL)
    {
        *First=newn;
    }
    else
    {
        newn->next=*First;
        *First=newn;
    }
}

void Display(PNODE First)
{
    while(First != NULL)
    {
        printf("%d\n",First->data);
        First=First->next;
    }
}

int Count(PNODE First)
{
    return 0;
}

int Pop(PPNODE First)
{
    return 0;   
}

int main()
{
    PNODE Head=NULL;
    Push(&Head,30);
    Push(&Head,29);
    Push(&Head,10);
    Push(&Head,49);
    Display(Head);
    return 0;
}