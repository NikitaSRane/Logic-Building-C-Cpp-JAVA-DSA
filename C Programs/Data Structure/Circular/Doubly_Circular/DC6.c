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

void InsertLast(PPNODE First, PPNODE Last, int iNo)
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
        newn->prev=*Last;
        (*Last)->next=newn;
        *Last=newn;
    }
    (*First)->prev=*Last;
    (*Last)->next=*First;
}

void InsertAtPos(PPNODE First, PPNODE Last, int iNo, int iPos)
{
    int ilength=Count(*First, *Last);

    PNODE newn=NULL;
    newn=(PNODE)malloc(sizeof(NODE));

    newn->data=iNo;
    newn->prev=NULL;
    newn->next=NULL;

    if((iPos < 1)||(iPos > ilength+1))
    {
        printf("Invalid position\n");
        return;
    }
    if(iPos == 1)
    {
        InsertFirst(First,Last,iNo);
    }
    else if(iPos == ilength+1)
    {
        InsertLast(First,Last,iNo);
    }
    else
    {
        int iCnt=0;
        PNODE temp=NULL;
        temp=*First;
        for(iCnt=1;iCnt<iPos-1;iCnt++)
        {
            temp=temp->next;
        }
        temp->next->prev=newn;
        newn->next=temp->next;
        newn->prev=temp;
        temp->next=newn;

    }
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
    InsertLast(&Head,&Tail,37);
    Display(Head,Tail);
    InsertAtPos(&Head,&Tail,45,2);
    Display(Head,Tail);
    return 0;
}