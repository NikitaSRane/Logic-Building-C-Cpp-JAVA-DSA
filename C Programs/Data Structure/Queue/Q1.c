#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node * next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void EnQueue(PPNODE First, int iNo)
{
    PNODE newn=NULL;

    newn=(PNODE)malloc(sizeof(NODE));
    newn->data=iNo;
    newn->next=NULL;

    if(*First == NULL)
    {
        *First=newn;
    }
    else
    {
        PNODE temp=NULL;
        temp=*First;

        while(temp->next != NULL)
        {
            temp=temp->next;
        }
        temp->next=newn;
    }
}

int DeQueue(PPNODE First)
{
    return 0;
}

void Display(PNODE First)
{

}

int Count(PNODE First)
{
    return 0;
}

int main()
{
    PNODE Head=NULL;
    EnQueue(&Head,49);
    EnQueue(&Head,19);
    EnQueue(&Head,60);
    EnQueue(&Head,40);c
    return 0;
}