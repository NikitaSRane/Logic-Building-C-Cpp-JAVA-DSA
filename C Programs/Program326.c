#include<stdio.h>
#include<stdlib.h>

// structure declaration
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
    PNODE newn=NULL;

    //Step1: Allocate dynamic memory for new node
    newn=(PNODE)malloc(sizeof(NODE));

    // Step2: Initialize the new node
    newn->data=No;
    newn->next=NULL;

    //Step3: check if linked list is empty

    if(*First==NULL)
    {
        *First=newn;
    }
    else // if linkedlist contains atleast one node in it
    {
        newn->next=*First;
        *First=newn;
    }

}

void Display(PNODE First)
{
    while(First != NULL)
    {
        printf("| %d |->",First->data);
        First=First->next;
    }
    printf("NULL\n");
}

int Count(PNODE First)
{
    int Count=0;
    while(First !=NULL)
    {
        Count++;
        First=First->next;
    }
    return Count;
}

int main()
{   
    PNODE Head=NULL;
    int iRet=0;

    InsertFirst(&Head,101);
    InsertFirst(&Head,51); // InsertFirst(60,51);
    InsertFirst(&Head,21);
    InsertFirst(&Head,11);

    Display(Head);

    iRet=Count(Head);

    printf("Number of nodes are: %d",iRet);

    return 0;
}