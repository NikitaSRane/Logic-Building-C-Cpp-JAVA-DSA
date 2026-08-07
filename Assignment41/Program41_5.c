// Write a program which returns largest element from singly linear linked list.
// Input linked list: | 10 |->| 20 |->| 30 |->| 40 |->| 50 |->| 30 |->| 70 |->NULL
// Output : 70


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
// Function Name: Minimum
// Description: Return smallest element of linked list.
// Input: Structure
// Output: Integer
// Author: Nikita Sagar Rane
// Date:03/07/2024
//
///////////////////////////////////////////////


int Minimum(PNODE First)
{
    int iMin=First->data;

    while( First != NULL)
    {
        if(First->data < iMin)
        {
            iMin=First->data;
        }
        First=First->next;
    }
    return iMin;

}

int main()
{
    PNODE Head=NULL;
    int iValue=0, iRet=0;

    InsertFirst(&Head,70);
    InsertFirst(&Head,30);
    InsertFirst(&Head,50);
    InsertFirst(&Head,40);
    InsertFirst(&Head,30);
    InsertFirst(&Head,20);
    InsertFirst(&Head,10);

    Display(Head);

    iRet=Minimum(Head);
    printf("Smallest element is: %d",iRet);

    return 0;
}