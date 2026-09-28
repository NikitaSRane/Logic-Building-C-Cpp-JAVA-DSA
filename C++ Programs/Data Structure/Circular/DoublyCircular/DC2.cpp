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
{

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

}
int DoublyCLL::Count()
{
    return iCount;
}

int main()
{
    DoublyCLL obj;
    int iRet=0;
    obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertFirst(11);
    iRet=obj.Count();
    cout<<"Number of elements are: "<<iRet<<endl;
    return 0;
}