#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node * prev;
    struct node * next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE First, PPNODE Last, int iNo)
{
    PNODE newn=NULL;

    newn=(PNODE)malloc(sizeof(NODE));

    newn->data=iNo;
    newn->prev=NULL;
    newn->next=NULL;

    if((*First == NULL)&&(*Last == NULL))
    {
        *First=newn;
        *Last=newn;
    }
    else
    {
        newn->next=*First;
        (*First)->prev=newn;
        *First=newn;
    }
    (*First)->prev=*Last;
    (*Last)->next=*First;
}

void InsertLast(PPNODE First, PPNODE Last, int iNo)
{

}

void InsertAtPos(PPNODE First, PPNODE Last, int iNo, int iPos)
{

}

void Display(PNODE First, PNODE Last)
{
    do
    {
        printf("%d<=>",First->data);
        First=First->next;
    }
    while(First != Last->next);
    printf("\n");
}

int Count(PNODE First, PNODE Last)
{
    int iCount=0;
    do
    {
        iCount++;
        First=First->next;
    }
    while(First != Last->next);
    
    return iCount;
}

void DeleteFirst(PPNODE First, PPNODE Last)
{

}

void DeleteLast(PPNODE First, PPNODE Last)
{

}

void DeleteAtPos(PPNODE First, PPNODE Last, int iPos)
{

}

int main()
{
    PNODE Head=NULL;
    PNODE Tail=NULL;
    int iRet=0;

    InsertFirst(&Head,&Tail,21);
    InsertFirst(&Head,&Tail,11);
    Display(Head,Tail);
    iRet=Count(Head,Tail);
    printf("Number of elements are: %d\n",iRet);
    return 0;
}