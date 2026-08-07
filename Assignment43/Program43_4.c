// Write a program which display smallest digits of all element from singly linear linked list.
// Input linked list: | 11 |->| 28 |->| 17 |->| 41 |->| 6 |->| 89 |->| 70 |->NULL
// Output :             1       2      1       1       6       8      0


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
// Function Name: SmallestDigit
// Description: Display smallest digit of element of linked list.
// Input: Structure
// Output: None
// Author: Nikita Sagar Rane
// Date:03/07/2024
//
///////////////////////////////////////////////


void SmallestDigit(PNODE First)
{
    int iDigit=0, iMin=0;

    printf("Smallest digit of elements are:\n");
    while(First != NULL)
    {
        iMin=9;
        while(First->data != 0)
        {
            iDigit=First->data % 10;
            if(iDigit < iMin)
            {
                iMin=iDigit;
            }
            First->data=First->data / 10;
        }
        printf("%d\t",iMin);
        iDigit=0;
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
    
    SmallestDigit(Head);

    return 0;
}