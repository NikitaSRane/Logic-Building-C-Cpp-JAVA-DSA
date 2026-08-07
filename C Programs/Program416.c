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

void Display(PNODE First)
{
    printf("Elements of stack are: \n");
    while(First != NULL)
    {
        printf("|%d|->",First->data);
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

void Push(PPNODE First,int No)
{
    PNODE newn=NULL;

    newn=(PNODE)malloc(sizeof(NODE));

    newn->data=No;
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

int Pop(PPNODE First)
{
    int iValue=0;

    if(*First == NULL)
    {
        printf("Unable to delete as stack is empty.");
        return -1;
    }
    else if((*First)->next == NULL)
    {
        iValue=(*First)->data;
        free(*First);
        *First=NULL;
    }
    else
    {
        PNODE temp=*First;

        iValue=(*First)->data;
        *First=(*First)->next;
        free(temp);
    }

    return iValue;
}

/*
int main()
{
    PNODE Head=NULL;
    int iRet=0;

    Push(&Head,10);
    Push(&Head,20);

    Display(Head);
    
    iRet=Count(Head);
    printf("Number of elements are: %d\n",iRet);

    iRet=Pop(&Head);
    printf("Popped element is: %d\n",iRet);

    Display(Head);
    
    iRet=Count(Head);
    if(iRet != -1)
    {
        printf("Number of elements are: %d\n",iRet);
    }
    return 0;
}

*/
int main()
{
    PNODE Head=NULL;
    int iChoice=0;
    int iNo=0;

    printf("------------------Implementation of stack---------------\n");

    while(iChoice != 5)
    {
        printf("Please select your choice: \n");
        printf("1: Insert new element in stack\n");
        printf("2: Remove the element from stack\n");
        printf("3: Display the elements from stack\n");
        printf("4: Count number of elements in stack\n");
        printf("5: Exit\n");

        scanf("%d",&iChoice);

        switch(iChoice)
        {
            case 1:
                printf("Enter number which you want to insert in stack: \n");
                scanf("%d",&iNo);
                Push(&Head,iNo);
            break;

            case 2:
                iNo=Pop(&Head);
                printf("Popped element is :%d\n",iNo);
            break;

            case 3:
                Display(Head);
            break;

            case 4:
                iNo=Count(Head);
                printf("Number of elements are: %d\n",iNo);
            break;

            case 5:
                printf("Thank you for using our application.\n");
            break;
        }
    }
    return 0;

}