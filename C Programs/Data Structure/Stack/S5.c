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
    int iNo=0;
    int iRet=0;
    int iChoice=0;

    while(iChoice != 5)
    {
        printf("Please select your choice\n");
        printf("1: Insert new element in stack\n");
        printf("2: Remove element from stack\n");
        printf("3: Display elements from stack\n");
        printf("4: Count number of elements into the stack\n");
        printf("5: Exit\n");

        scanf("%d",&iChoice);

        switch(iChoice)
        {
            case 1:
                printf("Enter the element that you want to insert:\n");
                scanf("%d",&iNo);
                Push(&Head,iNo);
            break;

            case 2:
                iRet=Pop(&Head);
                printf("Popped element is %d\n",iRet);
            break;

            case 3:
                Display(Head);
            break;

            case 4:
                iRet=Count(Head);
                printf("Number of elements are: %d \n",iRet);
            break;

            case 5:
                printf("Thank you for using application\n");
        }
    }
    return 0;
}