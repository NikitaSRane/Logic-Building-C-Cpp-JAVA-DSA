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
    return 0;
}