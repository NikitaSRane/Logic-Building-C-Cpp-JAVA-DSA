// Write a program which reverse each element of singly linear linked list.
// Input linked list: | 11 |->| 28 |->| 17 |->| 41 |->| 6 |->| 89 |->| 70 |->NULL
// Output :             11      82      71      14     6        98    07


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
// Function Name: Reverse
// Description: Display each element in reverse from linked list.
// Input: Structure
// Output: None
// Author: Nikita Sagar Rane
// Date:03/07/2024
//
///////////////////////////////////////////////


void Reverse(PNODE First)
{
    int iDigit=0, iRev=0;

    printf("Reverse elements are:\n");
    while(First != NULL)
    {
        while(First->data != 0)
        {
            iDigit=First->data % 10;
            iRev= iRev*10+iDigit;
            First->data=First->data / 10;
        }
        printf("%d\t",iRev);
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
    
    Reverse(Head);

    return 0;
}