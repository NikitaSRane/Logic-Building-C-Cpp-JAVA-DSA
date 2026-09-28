#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node * prev;
    struct node * next;
};

typedef struct node NODE;
typedef struct node * PNODE;

class DoublyLL
{
    public:

    PNODE First;
    int iCount;

    DoublyLL();
    void Display();
    int Count();
    void InsertFirst(int);
    void InsertLast(int);
    void InsertAtPos(int,int);
    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPos(int);

};

DoublyLL::DoublyLL()
{
    First=NULL;
    iCount=0;
}
void DoublyLL::Display()
{
    PNODE temp=First;
    cout<<"NULL<=>";
    while(temp != NULL)
    {
        cout<<temp->data<<"<=>";
        temp=temp->next;
    }
    cout<<"NULL\n";
}
int DoublyLL::Count()
{
    return iCount;
}
void DoublyLL::InsertFirst(int iNo)
{
    PNODE newn=NULL;

    newn=new NODE;

    newn->data=iNo;
    newn->next=NULL;
    newn->prev=NULL;

    if(First == NULL)
    {
        First=newn;
    }
    else
    {
        newn->next=First;
        First->prev=newn;
        First=newn;
    }
    iCount++;
}
void DoublyLL::InsertLast(int iNo)
{

}
void DoublyLL::InsertAtPos(int iNo,int iPos)
{

}
void DoublyLL::DeleteFirst()
{

}
void DoublyLL::DeleteLast()
{

}
void DoublyLL::DeleteAtPos(int iPos)
{

}

int main()
{
    DoublyLL obj;
    int iRet=0;
    obj.InsertFirst(20);
    obj.InsertFirst(30);
    obj.Display();
    iRet=obj.Count();
    cout<<"Number of elements are: "<<iRet<<endl;
    return 0;
}