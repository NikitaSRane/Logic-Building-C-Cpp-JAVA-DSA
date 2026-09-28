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

void Push(PPNODE First, int iNo)
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
        newn->next=*First;
        *First=newn;
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

int Pop(PPNODE First)
{
    int iValue=0;

    PNODE temp=NULL;
    temp=*First;

    iValue=temp->data;

    *First=temp->next;
    free(temp);

    return iValue;   
}

int main()
{
    PNODE Head=NULL;
    int iRet=0;

    Push(&Head,30);
    Push(&Head,29);
    Push(&Head,10);
    Push(&Head,49);
    Display(Head);
    iRet=Count(Head);
    printf("Number of elements are: %d\n",iRet);
    iRet=Pop(&Head);
    printf("Popped element is %d\n",iRet);
    return 0;
}