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

void InsertFirst(PPNODE First, PPNODE Last, int iNo)
{
    PNODE newn=NULL;
    newn=(PNODE)malloc(sizeof(NODE));

    newn->data=iNo;
    newn->next=NULL;

    if((*First == NULL)&&(*Last == NULL))
    {
        *First=newn;
        *Last=newn;
    }
    else
    {
        newn->next=*First;
        *First=newn;
    }
    (*Last)->next=*First;
}
void InsertLast(PPNODE First, PPNODE Last, int iNo)
{
    PNODE newn=NULL;
    newn=(PNODE)malloc(sizeof(NODE));

    newn->data=iNo;
    newn->next=NULL;

    if((*First == NULL)&&(*Last == NULL))
    {
        *First=newn;
        *Last=newn;
    }
    else
    {
        (*Last)->next=newn;
        *Last=newn;
    }
    (*Last)->next=*First;
}

void Display(PNODE First, PNODE Last)
{
    if((First == NULL)&&(Last == NULL))
    {
        return;
    }

    printf("->");   
    do
    {
        printf("%d->",First->data);
        First=First->next;
    }
    while(First != Last->next);
    printf("\n");
}

int Count(PNODE First, PNODE Last)
{
    int iCount=0;

    if((First == NULL)&&(Last == NULL))
    {
        return iCount;
    }   
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

    if((*First == NULL)&&(*Last == NULL))
    {
        printf("Unable to delete as linkedlist is empty.\n");
        return;
    }
    else if(*First == *Last)
    {
        free(*First);
        *First=NULL;
        *Last=NULL;
    }
    else
    {
        *First=(*First)->next;
        free((*Last)->next);
        (*Last)->next=*First;
    }
}

void DeleteLast(PPNODE First, PPNODE Last)
{

    if((*First == NULL)&&(*Last == NULL))
    {
        printf("Unable to delete as linkedlist is empty.\n");
        return;
    }
    else if(*First == *Last)
    {
        free(*First);
        *First=NULL;
        *Last=NULL;
    }
    else
    {
        PNODE temp=*First;

        while(temp->next != *Last)
        {
            temp=temp->next;
        }
        free(*Last);
        *Last=temp;
        (*Last)->next=*First;

    }
}

void InsertAtPos(PPNODE First,PPNODE Last,int iNo, int iPos)
{
    PNODE newn=NULL;

    newn=(PNODE)malloc(sizeof(NODE));

    newn->data=iNo;
    newn->next=NULL;

    int ilength=Count(*First,*Last);

    if((iPos < 0)||(iPos > ilength+1))
    {
        printf("Invalid position\n");
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
        PNODE temp=*First;

        for(iCnt=1;iCnt<iPos-1;iCnt++)
        {
            temp=temp->next;
        }

        newn->next=temp->next;
        temp->next=newn;
    }
}

int main()
{
    PNODE Head=NULL;
    PNODE Tail=NULL;
    int iRet=0;

    Display(Head,Tail);
    iRet=Count(Head,Tail);
    printf("Number of elements are: %d\n",iRet);
    InsertFirst(&Head,&Tail,20);
    InsertFirst(&Head,&Tail,30);
    InsertLast(&Head,&Tail,25);
    InsertLast(&Head,&Tail,69);
    Display(Head,Tail);
    iRet=Count(Head,Tail);
    printf("Number of elements are: %d\n",iRet);
    DeleteFirst(&Head,&Tail);
    Display(Head,Tail);
    DeleteLast(&Head,&Tail);
    Display(Head,Tail);
    InsertAtPos(&Head,&Tail,55,2);
    Display(Head,Tail);
    return 0;
}