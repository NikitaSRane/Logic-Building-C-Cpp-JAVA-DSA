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
    return 0;
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

}
void DeleteFirst(PPNODE First,PPNODE Last)
{

}

void DeleteLast(PPNODE First,PPNODE Last)
{

}

void DeleteAtPos(PPNODE First,PPNODE Last,int iPos)
{

}
int main()
{
    PNODE Head=NULL;
    PNODE Tail=NULL;

    InsertFirst(&Head,&Tail,51);
    InsertFirst(&Head,&Tail,21);
    InsertFirst(&Head,&Tail,11);

    InsertLast(&Head,&Tail,101);
    InsertLast(&Head,&Tail,111);
    InsertLast(&Head,&Tail,121);

    Display(Head,Tail);

    return 0;
}