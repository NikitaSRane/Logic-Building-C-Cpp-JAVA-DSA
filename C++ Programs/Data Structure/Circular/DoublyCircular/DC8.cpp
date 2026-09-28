#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node * next;
    struct node * prev;
};

typedef struct node NODE;
typedef struct node * PNODE;

class DoublyCLL
{
    public:

    int iCount;
    PNODE First;
    PNODE Last;

    DoublyCLL();
    void InsertFirst(int);
    void InsertLast(int);
    void DeleteFirst();
    void DeleteLast();
    void InsertAtPos(int,int);
    void DeleteAtPos(int);
    void Display();
    int Count();
};

DoublyCLL::DoublyCLL()
{
    iCount=0;
    First=NULL;
    Last=NULL;
}
void DoublyCLL::InsertFirst(int iNo)
{
    PNODE newn=NULL;
    newn=new NODE;

    newn->data=iNo;
    newn->next=NULL;
    newn->prev=NULL;

    if((First == NULL)&&(Last == NULL))
    {
        First=newn;
        Last=newn;
    }
    else
    {
        newn->next=First;
        First->prev=newn;
        First=newn;
    }
    Last->next=First;
    First->prev=Last;
    iCount++;
}
void DoublyCLL::InsertLast(int iNo)
{PNODE newn=NULL;
    newn=new NODE;

    newn->data=iNo;
    newn->next=NULL;
    newn->prev=NULL;

    if((First == NULL)&&(Last == NULL))
    {
        First=newn;
        Last=newn;
    }
    else
    {
        Last->next=newn;
        newn->prev=Last;
        Last=newn;
    }
    Last->next=First;
    First->prev=Last;
    iCount++;

}
void DoublyCLL::DeleteFirst()
{
    if((First == NULL)&&(Last == NULL))
    {
        cout<<"Unable to delete as linkedlist is empty\n ";
        return;
    }
    if(First == Last)
    {
        delete First;
        First=NULL;
        Last=NULL;
    }
    else
    {
        First=First->next;
        delete Last->next;
        First->prev=Last;
        Last->next=First;
    }

    iCount--;
}
void DoublyCLL::DeleteLast()
{
    if((First == NULL)&&(Last == NULL))
    {
        cout<<"Unable to delete as linkedlist is empty\n ";
        return;
    }
    if(First == Last)
    {
        delete First;
        First=NULL;
        Last=NULL;
    }
    else
    {
        Last=Last->prev;
        delete First->prev;
        First->prev=Last;
        Last->next=First;
    }

    iCount--;
}
void DoublyCLL::InsertAtPos(int iNo, int iPos)
{

    PNODE newn=NULL;
    newn=new NODE;

    newn->data=iNo;
    newn->prev=NULL;
    newn->next=NULL;

    if((iPos < 1 )||(iPos > iCount+1))
    {
        cout<<"Invalid position\n";
        return;
    }
    if(iPos == 1)
    {
        InsertFirst(iNo);
    }
    else if(iPos == iCount+1)
    {
        InsertLast(iNo);
    }
    else
    {
        int iCnt=0;
        PNODE temp=First;

        for(iCnt=1;iCnt<iPos-1;iCnt++)
        {
            temp=temp->next;
        }
        newn->next=temp->next;
        newn->prev=temp;
        temp->next=newn;
        temp->next->prev=newn;

        iCount++;
    }
}
void DoublyCLL::DeleteAtPos(int iPos)
{

    if((iPos<1)||(iPos>iCount))
    {
        cout<<"Invalid position.\n";
        return;
    }
    if(iPos==1)
    {
        DeleteFirst();
    }
    else if(iPos==iCount)
    {
        DeleteLast();
    }
    else
    {
        PNODE temp=First;
        PNODE temp2=NULL;
        int i=0;

        for(i=1;i<iPos-1;i++)
        {
            temp=temp->next;
        }
        temp2=temp->next;
        temp->next=temp2->next;
        temp2->next->prev=temp;
        delete temp2;

        iCount--;
    }
}
void DoublyCLL::Display()
{
    if((First == NULL)&&(Last == NULL))
    {
        cout<<"Linkedlist is empty."<<endl;
        return;
    }
    do
    {
        cout<<First->data<<"<=>";
        First=First->next;
    }
    while(First != Last->next);
    cout<<endl;
}
int DoublyCLL::Count()
{
    return iCount;
}

int main()
{
    DoublyCLL obj;
    int iRet=0;
    obj.Display();
    obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertFirst(11);
    obj.InsertLast(101);
    obj.InsertLast(111);
    obj.Display();
    iRet=obj.Count();
    cout<<"Number of elements are: "<<iRet<<endl;
    obj.DeleteFirst();
    obj.Display();
    iRet=obj.Count();
    cout<<"Number of elements are: "<<iRet<<endl;
    obj.DeleteLast();
    obj.Display();
    iRet=obj.Count();
    cout<<"Number of elements are: "<<iRet<<endl;
    obj.InsertAtPos(31,3);
    obj.Display();
    iRet=obj.Count();
    cout<<"Number of elements are: "<<iRet<<endl;
    obj.DeleteAtPos(3);
    obj.Display();
    iRet=obj.Count();
    cout<<"Number of elements are: "<<iRet<<endl;
    return 0;
}