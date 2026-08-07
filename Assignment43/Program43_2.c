// Write a program which display all palindrome elements of singly linear linked list.
// Input linked list: | 11 |->| 28 |->| 17 |->| 41 |->| 6 |->| 89 |->| 70 |->NULL
// Output :  11      6


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
// Function Name: DisplayPalindrome
// Description: Display palindrome elements from linked list.
// Input: Structure
// Output: None
// Author: Nikita Sagar Rane
// Date:03/07/2024
//
///////////////////////////////////////////////


void DisplayPalindrome(PNODE First)
{
    int iDigit=0, iRev=0;
    int No=0;

    printf("Reverse elements are:\n");
    while(First != NULL)
    {
        No=First->data;
        while(First->data != 0)
        {
            iDigit=First->data % 10;
            iRev= iRev*10+iDigit;
            First->data=First->data / 10;
        }
        if(No == iRev)
        {
            printf("%d\t",No);
        }
        iDigit=0;
        iRev=0;
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
    
    DisplayPalindrome(Head);

    return 0;
}