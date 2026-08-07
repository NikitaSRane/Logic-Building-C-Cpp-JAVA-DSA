#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node * next;
    struct node * prev;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void Display(PNODE First, PNODE Last)
{
    if((First == NULL )&&(Last == NULL))
    {
        printf("Linkedlist is empty.\n");
        return;
    }
    else
    {
        printf("<=");
        do
        {
            printf("|%d|<=>",First->data);
            First=First->next;
        }
        while(Last->next != First);

        printf("\n");
    }
}

int Count(PNODE First, PNODE Last)
{
    int iCount=0;

    if((First == NULL )&&(Last == NULL))
    {
        printf("Linkedlist is empty.\n");
        return iCount;
    }
    else
    {
        do
        {
            iCount++;
            First=First->next;
        }
        while(Last->next != First);

    }
    return iCount;
}
void InsertFirst(PPNODE First,PPNODE Last,int No)
{
    PNODE newn=NULL;

    newn=(PNODE)malloc(sizeof(NODE));

    newn->data=No;
    newn->next=NULL;
    newn->prev=NULL;

    if((*First == NULL)&&(*Last == NULL))
    {
        *First=newn;
        *Last=newn;
    }
    else
    {
        newn->next=*First;
        (*First)->prev=newn;
        *First=newn;

    }
    (*Last)->next=*First;
    (*First)->prev=*Last;
}

void InsertLast(PPNODE First,PPNODE Last,int No)
{

    PNODE newn=NULL;

    newn=(PNODE)malloc(sizeof(NODE));

    newn->data=No;
    newn->next=NULL;
    newn->prev=NULL;

    if((*First == NULL)&&(*Last == NULL))
    {
        *First=newn;
        *Last=newn;

    }
    else
    {   
        (*Last)->next=newn;
        newn->prev=*Last;
        *Last=newn;

    }
    (*Last)->next=*First;
    (*First)->prev=*Last;
}

void InsertAtPos(PPNODE First,PPNODE Last,int No,int iPos)
{

    PNODE temp=NULL;

    int iLength=0,i=0;

    iLength=Count(*First,*Last);

    if(iPos < 1 || iPos > iLength+1)
    {
        printf("Invalid position.\n");
        return;
    }
    if(iPos==1)
    {
        InsertFirst(First,Last,No);
    }
    else if(iPos == iLength+1)
    {
        InsertLast(First,Last,No);
    }
    else
    {

        PNODE newn=NULL;

        newn=(PNODE)malloc(sizeof(NODE));

        newn->data=No;
        newn->next=NULL;
        newn->prev=NULL;

        temp=*First;

        for(i=1;i<iPos-1;i++)
        {
            temp=temp->next;
        }

        newn->next=temp->next;
        temp->next->prev=newn;

        newn->prev=temp;
        temp->next=newn;
    }

}void DeleteFirst(PPNODE First,PPNODE Last)
{
    PNODE temp=NULL;

    if((*First == NULL )&&(*Last == NULL))
    {
        printf("Unable to delete as linkedlist is empty.\n");
        return;
    }
    else if(*First==*Last)
    {
        free(*First);
        *First=NULL;
        *Last=NULL;
    }
    else
    {
        temp=*First;

        *First=temp->next;
        free(temp);
        (*First)->prev=*Last;
        (*Last)->next=*First;
    }
}

void DeleteLast(PPNODE First,PPNODE Last)
{

    if((*First == NULL )&&(*Last == NULL))
    {
        printf("Unable to delete as linkedlist is empty.\n");
        return;
    }
    else if(*First==*Last)
    {
        free(*First);
        *First=NULL;
        *Last=NULL;
    }
    else
    {
        PNODE temp=NULL;

        temp=*Last;
        *Last=(*Last)->prev;
        (*Last)->next=*First;
        (*First)->prev=*Last;
        free(temp);
    }
}

void DeleteAtPos(PPNODE First,PPNODE Last,int iPos)
{
    PNODE temp=NULL;

    int iLength=0,i=0;

    iLength=Count(*First,*Last);

    if(iPos < 1 || iPos > iLength)
    {
        printf("Invalid position.\n");
        return;
    }
    if(iPos==1)
    {
        DeleteFirst(First,Last);
    }
    else if(iPos == iLength)
    {
        DeleteLast(First,Last);
    }
    else
    {
        temp=*First;

        for(i=1;i<iPos-1;i++)
        {
            temp=temp->next;
        }

        temp->next=temp->next->next;
        free(temp->next->prev);
        temp->next->prev=temp;

    }
}
/*
int main()
{
    PNODE Head=NULL;
    PNODE Tail=NULL;
    int iRet=0;


    InsertFirst(&Head,&Tail,51);
    InsertFirst(&Head,&Tail,21);
    InsertFirst(&Head,&Tail,11);

    InsertLast(&Head,&Tail,101);
    InsertLast(&Head,&Tail,111);
    InsertLast(&Head,&Tail,121);

    Display(Head,Tail);

    iRet=Count(Head,Tail);
    printf("Number of elements are: %d\n",iRet);

    InsertAtPos(&Head,&Tail,105,5);

    Display(Head,Tail);

    iRet=Count(Head,Tail);
    printf("Number of elements are: %d\n",iRet);

    DeleteAtPos(&Head,&Tail,5);

    Display(Head,Tail);

    iRet=Count(Head,Tail);
    printf("Number of elements are: %d\n",iRet);

    return 0;
}
*/
int main()
{
    PNODE Head=NULL;
    PNODE Tail=NULL;
    int iNo=0;
    int iPos=0;
    int iChoice=0;

    while(iChoice != 9)
    {
        printf("1: Insert element at first position of linkedlist \n");
        printf("2: Insert element at last position of linkedlist \n");
        printf("3: Insert element at given position of linkedlist \n");
        printf("4: Delete element at first position of linkedlist \n");
        printf("5: Delete element at last position of linkedlist \n");
        printf("6: Delete element at given position of linkedlist \n");
        printf("7: Display elements of linkedlist \n");
        printf("8: Count elements of linkedlist \n");
        printf("9: Exit \n");

        scanf("%d",&iChoice);

        switch(iChoice)
        {
            case 1:
                printf("Enter the number which you want to insert at first position in linkedlist\n");
                scanf("%d",&iNo);

                InsertFirst(&Head,&Tail,iNo);
            break;

            case 2:
                printf("Enter the number which you want to insert at last position in linkedlist\n");
                scanf("%d",&iNo);

                InsertLast(&Head,&Tail,iNo);
            break;

            case 3:
                printf("Enter the number of position: \n");
                scanf("%d",&iPos);
                printf("Enter the number which you want to insert at given position in linkedlist\n");
                scanf("%d",&iNo);

                InsertAtPos(&Head,&Tail,iNo,iPos);
            break;

            case 4:
                DeleteFirst(&Head,&Tail);
            break;

            case 5:
                DeleteLast(&Head,&Tail);
            break;

            case 6:
                printf("Enter the number of position: \n");
                scanf("%d",&iPos);

                DeleteAtPos(&Head,&Tail,iPos);
            break;

            case 7:
                Display(Head,Tail);
            break;

            case 8:
                iNo=Count(Head,Tail);
                printf("Number of elements are: %d\n",iNo);
            break;  

            case 9:
                printf("Thank you for using our application\n.");
            break;           
        }


    }
    return 0;
}