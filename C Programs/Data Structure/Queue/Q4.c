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
    int iValue=0;

    if(*First == NULL)
    {
        printf("Unable to dequeue element as queue is empty\n");
        return -1;
    }
    else
    {
        PNODE temp=NULL;
        temp=*First;

        iValue=temp->data;

        *First=temp->next;
        free(temp);
        return iValue;
    }
}

void Display(PNODE First)
{
    while(First != NULL)
    {
        printf("%d\n",First->data);
        First=First->next;
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

int main()
{
    PNODE Head=NULL;
    int iRet=0;

    EnQueue(&Head,49);
    EnQueue(&Head,19);
    EnQueue(&Head,60);
    EnQueue(&Head,40);
    Display(Head);
    iRet=Count(Head);
    printf("Number of elements are: %d\n",iRet);
    iRet=DeQueue(&Head);
    printf("Popped element is %d\n",iRet);
    Display(Head);
    iRet=Count(Head);
    printf("Number of elements are: %d\n",iRet);
    return 0;
}