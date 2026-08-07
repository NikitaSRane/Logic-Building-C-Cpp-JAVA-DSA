#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE First, int No)
{
    PNODE newn=NULL;

    newn=(PNODE)malloc(sizeof(NODE));

    newn->data=No;
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
} // O(1)

void InsertLast(PPNODE First, int No)
{
    PNODE newn=NULL;
    PNODE temp=NULL;

    newn=(PNODE)malloc(sizeof(NODE));

    newn -> data=No;
    newn -> next=NULL;

    if(*First == NULL)
    {
        *First=newn;
    }
    else
    {
        temp=*First;

        while(temp->next != NULL)
        {
            temp=temp -> next;
        }  
        temp -> next=newn; 
    }
} // O(N)

void Display(PNODE First)
{
    while(First != NULL)
    {
        printf("|%d|->",First -> data);
        First=First -> next;
    }
    printf("NULL\n");
} // O(N)

int Count(PNODE First)
{
    int iCount=0;

    while(First != NULL)
    {
        iCount++;
        First=First->next;
    }
    return iCount;
} // O(N)

int main()
{
    PNODE Head=NULL;
    int iRet=0;

    InsertFirst(&Head,51);
    InsertFirst(&Head,21);
    InsertFirst(&Head,11);


    InsertLast(&Head,101);
    InsertLast(&Head,111);
    InsertLast(&Head,121);

    Display(Head);

    iRet=Count(Head);
    printf("Number of elements are: %d\n",iRet);

    return 0;
}

/*
InsertFirst

    1.    Allocate memory for node
    2.    initialize the node
    3.    check whether linkedlist is empty or not
    4.    if empty store the address of newnode in the Head pointer through first
    5.    otherwise store the address of old first node in the next of new node.
    6.    update the head accordingly
*/