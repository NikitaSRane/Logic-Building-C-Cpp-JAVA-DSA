#include<stdio.h>
#include<stdlib.h>

struct Node   // structure definition
{
    int data;
    struct Node *next;
};

typedef struct Node NODE;
typedef struct Node *PNODE;
typedef struct Node **PPNODE;

/*-----------------------------------------
    OLD NAME            NEW NAME
-------------------------------------------
    struct Node         NODE
    struct Node         *PNODE
    struct Node         **PPNODE
-------------------------------------------*/


/*-------------------------------------------

Function Name: InsertFirst
Description:Used to insert at first position of linked list
parameter:address of first pointer & data of node
return value: void 

----------------------------------------------------*/

void InsertFirst(PPNODE Head,int no)
{
    PNODE newn=NULL;
    newn=(PNODE)malloc(sizeof(NODE)); // allocate memory
    newn->data=no; // initialise data
    newn->next=NULL; //initialise pointer

    if(*Head == NULL) //linkedlist is empty
    {
        *Head= newn;
    }
    else //Linkedlist contains atleast one node
    {
        newn->next=*Head;
        *Head=newn;
    }

}

/*-------------------------------------------

Function Name: InsertLast
Description:Used to insert at last position of linked list
parameter:address of first pointer & data of node
return value: void 

----------------------------------------------------*/

void InsertLast(PPNODE Head,int no)
{
    PNODE newn=NULL;
    PNODE temp=*Head;

    newn=(PNODE)malloc(sizeof(NODE)); // allocate memory
    newn->data=no; // initialise data
    newn->next=NULL; //initialise pointer

    if(*Head == NULL) //linkedlist is empty
    {
        *Head= newn;
    }
    else //Linkedlist contains atleast one node
    {
        while(temp->next != NULL)
        {
            temp=temp->next;
        }
        temp->next=newn;
    }

}

/*----------------------------------------------

Function Name:Display
Description: Used to display elements of linked list
parametes: first pointer
return value:void
------------------------------------------------*/
void Display(PNODE Head)
{
    while(Head !=NULL)
    {
        printf("%d\t",Head->data);
        Head=Head->next;
    }
}
/*----------------------------------------------

Function Name:Count
Description: Used to count elements of linked list
parametes: first pointer
return value:int
------------------------------------------------*/
int Count(PNODE Head)
{
    int iCnt=0;

    while(Head != NULL)
    {
        iCnt++;
        Head=Head ->next;
    }
    return iCnt;
}



int main()
{
    int iRet=0;

    PNODE First=NULL;

    InsertFirst(&First,51);
    InsertFirst(&First,21);
    InsertFirst(&First,11);

    Display(First);

    iRet=Count(First);

    printf("\nNumber of elements are %d : \n",iRet);

    InsertLast(&First,101);
    InsertLast(&First,111);

    Display(First);


    return 0;
}
