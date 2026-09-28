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

}

int Count(PNODE First)
{
    
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

    InsertFirst(&Head,&Tail,21);
    InsertFirst(&Head,&Tail,11);


    return 0;
}