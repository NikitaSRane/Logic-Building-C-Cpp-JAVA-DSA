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

void DeleteFirst(PPNODE First)
{
    if(*First == NULL)
    {
        printf("Unable to delete as linkedlist is empty.\n");
        return;
    }
    if(((*First)->next == NULL)&&((*First)->prev == NULL))
    {
        free(*First);
        *First=NULL;
    }
    else
    {   
        *First=(*First)->next;
        free((*First)->prev);
        (*First)->prev=NULL;
    }
}

void InsertLast(PPNODE First, int iNo)
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
        PNODE temp=*First;

        while(temp->next != NULL)
        {
            temp=temp->next;
        }

        newn->prev=temp;
        temp->next=newn;
    }
}


void DeleteLast(PPNODE First)
{
    if(*First == NULL)
    {
        printf("Unable to delete as linkedlist is empty\n");
    }
    if(((*First)->next == NULL)&&((*First)->prev == NULL))
    {
        free(*First);
        *First=NULL;
    }
    else
    {
        PNODE temp=*First;

        while(temp->next->next != NULL)
        {
            temp=temp->next;
        }
        free(temp->next);
        temp->next=NULL;
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

void InsertAtpos(PPNODE First, int iNo, int iPos)
{
    int ilength=0;
    ilength=Count(*First);

    if(iPos < 0 || iPos > ilength+1)
    {
        printf("Invalid position");
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
        int iCnt=0;
        PNODE temp=*First;

        PNODE newn=NULL;

        newn=(PNODE)malloc(sizeof(NODE));
    
        newn->data=iNo;
        newn->prev=NULL;
        newn->next=NULL;

        for(iCnt=1;iCnt<iPos-1;iCnt++)
        {
            temp=temp->next;
        }
        
        newn->prev=temp;
        newn->next=temp->next;
        temp->next->prev=newn;
        temp->next=newn;

    }
}

void DeleteAtpos(PPNODE First,int iPos)
{
    int ilength=0;
    ilength=Count(*First);

    if(iPos < 0 || iPos > ilength+1)
    {
        printf("Invalid position");
        return;
    }
    if(iPos == 1)
    {
        DeleteFirst(First);  
    }
    else if(iPos == ilength+1)
    {
        
        DeleteLast(First);
    }
    else
    {
        int iCnt=0;
        PNODE temp1=*First; 
        PNODE temp2=NULL;

        for(iCnt=1;iCnt<iPos-1;iCnt++)
        {
            temp1=temp1->next;
        }
        temp2=temp1->next;
        temp1->next=temp2->next;
        temp2->next->prev=temp1->next;
        free(temp2);
    }
}

int main()
{
    PNODE Head=NULL;
    int iRet=0;

    InsertFirst(&Head,45);
    InsertFirst(&Head,78);
    Display(Head);
    iRet=Count(Head);
    printf("Number of elements are: %d\n",iRet);
    InsertLast(&Head,66);
    InsertLast(&Head,36);
    Display(Head);
    DeleteFirst(&Head);
    Display(Head);
    DeleteLast(&Head);
    Display(Head);
    InsertAtpos(&Head,30,3);
    Display(Head);
    DeleteAtpos(&Head,2);
    Display(Head);
    return 0;
}