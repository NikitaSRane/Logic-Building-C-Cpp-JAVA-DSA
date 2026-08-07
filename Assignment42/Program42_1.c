// Write a program which displays all elements which are perfect from singly linear linked list.
// Input linked list: | 11 |->| 28 |->| 17 |->| 41 |->| 6 |->| 89 |->| 70 |->NULL
// Output : 6  28


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


///////////////////////////////////////////////
//
// Function Name: InsertFirst
// Description: Insert element in linked list.
// Input: Structure,Integer
// Output: Integer
// Author: Nikita Sagar Rane
// Date:03/07/2024
//
///////////////////////////////////////////////


void InsertFirst(PPNODE First,int No)
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

///////////////////////////////////////////////
//
// Function Name: Display
// Description: Display elements from linked list.
// Input: Structure
// Output: None
// Author: Nikita Sagar Rane
// Date:03/07/2024
//
///////////////////////////////////////////////


void Display(PNODE First)
{
    while(First != NULL)
    {
        printf("| %d |->",First->data);
        First=First->next;
    }
    printf("NULL\n");
}


///////////////////////////////////////////////
//
// Function Name: DisplayPerfect
// Description: Display perfect elements from the linked list
// Input: Structure
// Output: None
// Author: Nikita Sagar Rane
// Date:03/07/2024
//
///////////////////////////////////////////////


void DisplayPerfect(PNODE First)
{
    int iSum=0;
    
    printf("Perfect numbers are: \n ");
    while(First != NULL)
    {
        int iCnt=1;

        while(iCnt <= First->data/2 )
        {
            if(First->data % iCnt == 0 )
            {
                iSum=iSum+iCnt;
            }
            if( iSum == First->data)
            {
                printf("%d\n",First->data);
            }
            iCnt++;
        }
        iSum=0;
        First=First->next;
    }
}

int main()
{
    PNODE Head=NULL;
    int iValue=0, iRet=0;

    InsertFirst(&Head,11);
    InsertFirst(&Head,28);
    InsertFirst(&Head,17);
    InsertFirst(&Head,41);
    InsertFirst(&Head,6);
    InsertFirst(&Head,89);
    InsertFirst(&Head,70);

    Display(Head);
    
    DisplayPerfect(Head);

    return 0;
}