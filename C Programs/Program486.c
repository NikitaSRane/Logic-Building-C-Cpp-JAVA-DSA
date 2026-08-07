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

/*
void Display(PNODE First)
{
    while(First != NULL)
    {
        printf("|%d|->",First -> data);
        First=First -> next;
    }
    printf("NULL\n");
} // O(N)

*/

void Display(PNODE First)
{
    if(First != NULL)
    {
        Display(First->next); // Head recursion
        printf("%d\t",First->data);
    }
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
} // O(N)

void DeleteFirst(PPNODE First)
{
    PNODE temp;

    if(*First == NULL)    // case1
    {
        printf("Unable to delete as LinkedList is empty.\n");
        return;
    }
    else if((*First) -> next == NULL ) //case2
    {
        free(*First);
        *First=NULL;
    }
    else    //case3
    {
        temp=*First;
        *First= (*First)->next;
        free(temp);
    }
}

void DeleteLast(PPNODE First)
{
    PNODE temp=NULL;

    if(*First == NULL)    // case1
    {
        printf("Unable to delete as LinkedList is empty.\n");
        return;
    }
    else if((*First) -> next == NULL ) //case2
    {
        free(*First);
        *First=NULL;
    }
    else    //case3
    {
        temp=*First;

        while(temp->next->next != NULL)
        {
            temp=temp->next;
        }
        free(temp->next);
        temp->next=NULL;
    }
}

void InsertAtPos(PPNODE First,int No, int iPos)
{
    int iLength=0, i=0;
    PNODE newn=NULL;
    PNODE temp=NULL;

    iLength=Count(*First);

    if((iPos < 1)|| (iPos > iLength+1))
    {
        printf("Invalid Position.");
        return;
    }
    if(iPos == 1)
    {
        InsertFirst(First,No);
    }
    else if(iPos == iLength+1)
    {
        InsertLast(First,No);
    }
    else
    {
        newn=(PNODE)malloc(sizeof(NODE));

        newn->data=No;
        newn->next=NULL;

        temp=*First;

        for(i=1;i<iPos-1;i++)
        {
            temp=temp->next;
        }
        newn->next=temp->next;
        temp->next=newn;
    }

}

void DeleteAtPos(PPNODE First,int iPos)
{
    int iLength=0, i=0;
    PNODE temp1=NULL;
    PNODE temp2=NULL;

    iLength=Count(*First);

    if((iPos < 1)|| (iPos > iLength))
    {
        printf("Invalid Position.");
        return;
    }
    if(iPos == 1)
    {
        DeleteFirst(First);
    }
    else if(iPos == iLength)
    {
        DeleteLast(First);
    }
    else
    {
        temp1=*First;

        for(i=1;i=iPos-1;i++)
        {
            temp1=temp1->next;
        }
        temp2=temp1->next;

        temp1->next=temp2->next;
        free(temp1);
    }

}

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
    InsertLast(&Head,151);

    Display(Head);


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