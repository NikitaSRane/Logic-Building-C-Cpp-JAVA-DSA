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

}
void DoublyCLL::DeleteLast()
{

}
void DoublyCLL::InsertAtPos(int iNo, int iPos)
{

}
void DoublyCLL::DeleteAtPos(int iPos)
{

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
    return 0;
}