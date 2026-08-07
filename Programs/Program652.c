#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE First, int No)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;

    if(*First == NULL)
    {
        *First = newn;
    }
    else
    {
        newn->next = *First;
        *First = newn;
    }
}   

void Display(PNODE First)
{
    while(First != NULL)
    {
        printf("| %d |->",First->data);
        First = First -> next;
    }
    printf("NULL\n");
} 

int Count(PNODE First)
{
    int iCnt = 0;

    while(First != NULL)
    {
        iCnt++;
        First = First -> next;
    }
    return iCnt;
} 

int Addition(PNODE First)
{
    int iSum=0;

    while(First != NULL)
    {
        iSum=iSum+(First->data);
        First=First->next;
    }
    return iSum;
}

int OddCount(PNODE First)
{
    int iCount=0;

    while(First != NULL)
    {
        if(First->data % 2 == 1)
        {
            iCount++;
        }
    }
    return iCount;
}

int EvenCount(PNODE First)
{
    int iCount=0;

    while(First != NULL)
    {
        if(First->data % 2 == 0)
        {
            iCount++;
        }
    }
    return iCount;
}

int Frequency(PNODE First, int No)
{
    int iCount=0;

    while(First != NULL)
    {
        if(First->data == No)
        {
            iCount++;
        }
        First=First->next;
    }
    return iCount;
}

bool Search(PNODE First,int No)
{
    bool bFlag=false;

    while(First != NULL)
    {
        if(First->data == No)
        {
            bFlag=true;
            break;
        }
        First=First->next;
    }
    return bFlag;
}

int FirstOccurence(First, int No)
{
    int iCount=1;

    while(First != NULL)
    {
        if(First->data == No)
        {
            break;
        }
        iCount++;
        First=First->next;
    }
    if(First == NULL)
    {
        return -1;
    }
    else
    {
        return iCount;
    }
}

int LastOccurence(First, int No)
{
    int iCount=1;
    int iPos=1;

    while(First != NULL)
    {
        if(First->data == No)
        {
            iPos=iCount;
        }
        iCount++;
        First=First->next;
    }
    if(First == NULL)
    {
        return -1;
    }
    else
    {
        return iPos;
    }
}

void SumDigits(PNODE First)
{
    int No=0;

    while(First !=NULL)
    {   
        int iDigit=0;
        int iSum=0;

        No=First->data;
        while(No !=0)
        {
            iDigit=No % 10;
            iSum=iSum+iDigit;
            No=No / 10;
        }
        printf("%d\n",iSum);

    }
    First=First->next;
}

void SumFactors(PNODE First)
{
    int No=First->data;
    int i=0;
    int iSum=0;

    while(First != NULL)
    {
        for(i=1;i<=iNo/2;i++)
        {
            if(No % i == 0)
            {
                iSum=iSum+i;
            }   
        }
        printf("%d\n",iSum);
        iSum=0;
        First=First->next;
    }

}

bool CheckPerfect(PNODE First)
{
    int No=First->data;
    int i=0;
    int iSum=0;

    while(First != NULL)
    {
        for(i=1;i<=iNo/2;i++)
        {
            if(No % i == 0)
            {
                iSum=iSum+i;
            }   
        }
        printf("%d\n",iSum);
        iSum=0;
        First=First->next;
    }
    if(iSum == )
}
int main()
{
    PNODE Head = NULL;
    int iRet = 0;
    bool bRet=0;
    
    InsertFirst(&Head,42);
    InsertFirst(&Head,10);
    InsertFirst(&Head,50);
    InsertFirst(&Head,21);
    InsertFirst(&Head,10);
    InsertFirst(&Head,21);
    InsertFirst(&Head,11);
    
    Display(Head);
    iRet=Addition(Head);
    printf("Addition of all elements is: %d\n ",iRet);

    iRet=EvenCount(Head);
    printf("Number of even elements are: %d\n",iRet);

    iRet=OddCount(Head);
    printf("Number of odd elements are: %d\n",iRet);

    iRet=Frequency(Head,21);
    printf("Frequency is: %d",iRet);

    bRet=Search(Head,50);
    if(bRet == true)
    {
        printf("Element is present in linkedlist\n");
    }
    else
    {
        printf("There is no such element in linkedlist \n");
    }
    iRet=FirstOccurence(Head,73);
    if(iRet == -1)
    {
        printf("There is no such element in linkedlist \n");
    }
    else
    {
        printf("First occurence of element is :%d\n",iRet);
    }
    iRet=LastOccurence(Head,21);
    if(iRet == -1)
    {
        printf("There is no such element in linkedlist \n");
    }
    else
    {
        printf("last occurence of element is :%d\n",iRet);
    }

    SumDigits(Head);
    SumFactors(Head);
    
    return 0;
}
