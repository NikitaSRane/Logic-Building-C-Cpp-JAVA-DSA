// Write a program which display addition of digits of element from singly linear linked list.
// Input linked list: | 11 |->| 28 |->| 17 |->| 41 |->| 6 |->| 89 |->| 70 |->NULL
// Output : 2   10  8   5   6   17  7


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
// Function Name: SumDigit
// Description: Display addition of digits of element from linked list.
// Input: Structure
// Output: None
// Author: Nikita Sagar Rane
// Date:03/07/2024
//
///////////////////////////////////////////////


void SumDigit(PNODE First)
{
    int iDigit=0,iSum=0;

    printf("Sum of Digits is:\n");
    while(First != NULL)
    {
        while(First->data != 0)
        {
            iDigit=First->data % 10;
            iSum=iSum+iDigit;
            First->data=First->data / 10;
        }
        printf("%d\t",iSum);
        iDigit=0;
        iSum=0;
        First=First->next;
    }
}

int main()
{
    PNODE Head=NULL;

    InsertFirst(&Head,11);
    InsertFirst(&Head,28);
    InsertFirst(&Head,17);
    InsertFirst(&Head,41);
    InsertFirst(&Head,6);
    InsertFirst(&Head,89);
    InsertFirst(&Head,70);

    Display(Head);
    
    SumDigit(Head);

    return 0;
}