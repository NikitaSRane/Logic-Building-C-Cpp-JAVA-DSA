#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node * next;
    struct node * prev;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void Display(PNODE First, PNODE Last)
{
    if((First == NULL )&&(Last == NULL))
    {
        printf("Linkedlist is empty.\n");
        return;
    }
    else
    {
        printf("<=");
        do
        {
            printf("|%d|<=>",First->data);
            First=First->next;
        }
        while(Last->next != First);

        printf("\n");
    }
}


int Count(PNODE First, PNODE Last)
{
    int iCount=0;

    if((First == NULL )&&(Last == NULL))
    {
        printf("Linkedlist is empty.\n");
        return iCount;
    }
    else
    {
        do
        {
            iCount++;
            First=First->next;
        }
        while(Last->next != First);

    }
    return iCount;
}
void InsertFirst(PPNODE First,PPNODE Last,int No)
{
    PNODE newn=NULL;

    newn=(PNODE)malloc(sizeof(NODE));

    newn->data=No;
    newn->next=NULL;
    newn->prev=NULL;

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
    (*Last)->next=*First;
    (*First)->prev=*Last;
}

void InsertLast(PPNODE First,PPNODE Last,int No)
{

    PNODE newn=NULL;

    newn=(PNODE)malloc(sizeof(NODE));

    newn->data=No;
    newn->next=NULL;
    newn->prev=NULL;

    if((*First == NULL)&&(*Last == NULL))
    {
        *First=newn;
        *Last=newn;

    }
    else
    {   
        (*Last)->next=newn;
        newn->prev=*Last;
        *Last=newn;

    }
    (*Last)->next=*First;
    (*First)->prev=*Last;
}


void InsertAtPos(PPNODE First,PPNODE Last,int No,int iPos)
{

    PNODE temp=NULL;

    int iLength=0,i=0;

    iLength=Count(*First,*Last);

    if(iPos < 1 || iPos > iLength+1)
    {
        printf("Invalid position.\n");
        return;
    }
    if(iPos==1)
    {
        InsertFirst(First,Last,No);
    }
    else if(iPos == iLength+1)
    {
        InsertLast(First,Last,No);
    }
    else
    {

        PNODE newn=NULL;

        newn=(PNODE)malloc(sizeof(NODE));

        newn->data=No;
        newn->next=NULL;
        newn->prev=NULL;

        temp=*First;

        for(i=1;i<iPos-1;i++)
        {
            temp=temp->next;
        }

        newn->next=temp->next;
        temp->next->prev=newn;

        newn->prev=temp;
        temp->next=newn;
    }

}
void DeleteFirst(PPNODE First,PPNODE Last)
{
    PNODE temp=NULL;

    if((*First == NULL )&&(*Last == NULL))
    {
        printf("Unable to delete as linkedlist is empty.\n");
        return;
    }
    else if(*First==*Last)
    {
        free(*First);
        *First=NULL;
        *Last=NULL;
    }
    else
    {
        temp=*First;

        *First=temp->next;
        free(temp);
        (*First)->prev=*Last;
        (*Last)->next=*First;
    }
}

void DeleteLast(PPNODE First,PPNODE Last)
{

    PNODE temp=NULL;

    if((*First == NULL )&&(*Last == NULL))
    {
        printf("Unable to delete as linkedlist is empty.\n");
        return;
    }
    else if(*First==*Last)
    {
        free(*First);
        *First=NULL;
        *Last=NULL;
    }
    else
    {
        temp=*Last;
        *Last=(*Last)->prev;
        free(temp);

        (*Last)->next=*First;
        (*First)->prev=*Last;
    }
}

void DeleteAtPos(PPNODE First,PPNODE Last,int iPos)
{

}
int main()
{
    PNODE Head=NULL;
    PNODE Tail=NULL;
    int iRet=0;


    InsertFirst(&Head,&Tail,51);
    InsertFirst(&Head,&Tail,21);
    InsertFirst(&Head,&Tail,11);

    InsertLast(&Head,&Tail,101);
    InsertLast(&Head,&Tail,111);
    InsertLast(&Head,&Tail,121);

    Display(Head,Tail);

    iRet=Count(Head,Tail);
    printf("Number of elements are: %d\n",iRet);

    InsertAtPos(&Head,&Tail,105,5);

    Display(Head,Tail);

    iRet=Count(Head,Tail);
    printf("Number of elements are: %d\n",iRet);

    return 0;
}