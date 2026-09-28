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

    return 0;
}