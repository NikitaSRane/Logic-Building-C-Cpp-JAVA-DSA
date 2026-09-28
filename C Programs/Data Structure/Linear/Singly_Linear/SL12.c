#include<stdio.h>
#include<stdlib.h>

struct node
{
    int Data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE First, int No)
{
    PNODE newn=NULL;
    newn=(PNODE)malloc(sizeof(NODE));

    newn->Data=No;
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

void InsertLast(PPNODE First, int No)
{
    PNODE newn=NULL;
    newn=(PNODE)malloc(sizeof(NODE));

    newn->Data=No;
    newn->next=NULL;

    if(*First == NULL)
    {
        *First=newn;
    }
    else
    {
        PNODE temp=*First;

        while(temp->next != NULL)
        {
            temp=temp->next;
        }
        temp->next=newn;
    }
}

void DeleteFirst(PPNODE First)
{
    if(*First == NULL)
    {
        printf("Unable to delete as a Linkedlist is empty\n");
    }
    else if((*First)->next == NULL)
    {
        free(*First); // free dynamic memory
        *First=NULL; // set NULL to pointer
    }
    else
    {
        PNODE temp=NULL;

        temp=*First;
        *First=(*First)->next;
        free(temp);
    }
}

void DeleteLast(PPNODE First)
{
    if(*First == NULL)
    {
        printf("Unable to delete as a Linkedlist is empty\n");
    }
    else if((*First)->next == NULL)
    {
        free(*First); // free dynamic memory
        *First=NULL; // set NULL to pointer
    }
    else
    {
        PNODE temp=NULL;

        temp=*First;
        
        while(temp->next->next != NULL)
        {
            temp=temp->next;
        }
        free(temp->next);
        temp->next=NULL;
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
}


void InsertAtPos(PPNODE First,int iNo, int iPos)
{
    int ilength=0;
    ilength=Count(*First);
    
    if((iPos < 1) || (iPos > ilength+1))
    {
        printf("Invalid Position \n");
        return;
    }

    if(iPos == 1)
    {
        InsertFirst(First,iNo);
    }
    else if(iPos == ilength+1)
    {
        InsertLast(First,iNo);
    }
    else
    {

        PNODE newn=NULL;
        newn=(PNODE)malloc(sizeof(NODE));
    
        newn->Data=iNo;
        newn->next=NULL;

        PNODE temp=*First;

        int iCnt=0;

        for(iCnt=1;iCnt<iPos-1;iCnt++)
        {
            temp=temp->next;
        }
        
        newn->next=temp->next;
        temp->next=newn;
    }
}

void Display(PNODE First)
{
    while(First != NULL)
    {
        printf("%d->",First->Data);
        First=First->next;
    }
    printf("NULL\n");
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
    Display(Head);
    iRet=Count(Head);
    printf("Number of elements are: %d\n",iRet);
    InsertAtPos(&Head,100,3);
    Display(Head);
    iRet=Count(Head);
    printf("Number of elements are: %d\n",iRet);
    InsertAtPos(&Head,20,1);
    Display(Head);
    InsertAtPos(&Head,400,8);
    Display(Head);
    InsertAtPos(&Head,300,-2);
    Display(Head);
    return 0;
}