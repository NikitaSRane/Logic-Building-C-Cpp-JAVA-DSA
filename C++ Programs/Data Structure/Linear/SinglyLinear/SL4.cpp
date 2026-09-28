#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node * next;
};

typedef struct node NODE;
typedef struct node * PNODE;
//typedef struct node ** PPNODE;

class SinglyLL
{
    public:

    PNODE First;
    int iCount;

    SinglyLL();
    void InsertFirst(int);
    void InsertLast(int);
    void InsertAtPos(int,int);
    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPos(int);
    void Display();
    int Count();
};

SinglyLL::SinglyLL()
{
    cout<<"Inside constructor\n";
    First=NULL;
    iCount=0;
}

void SinglyLL::InsertFirst(int iNo)
{
    PNODE newn=NULL;
    newn=new NODE;

    newn->data=iNo;
    newn->next=NULL;

    if(First == NULL)
    {
        First=newn;
    }
    else
    {
        newn->next=First;
        First=newn;
    }
    iCount++;
}
void SinglyLL::InsertLast(int iNo)
{

}
void SinglyLL::InsertAtPos(int iNo,int iPos)
{

}
void SinglyLL::DeleteFirst()
{

}
void SinglyLL::DeleteLast()
{

}
void SinglyLL::DeleteAtPos(int iPos)
{

}
void SinglyLL::Display()
{
    PNODE temp=First;

    while(temp != NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL\n";
}
int SinglyLL::Count()
{
    return iCount;
}

int main()
{
    SinglyLL obj;
    int iRet=0;
    obj.InsertFirst(25);
    obj.InsertFirst(87);
    obj.Display();
    iRet=obj.Count();
    cout<<"Number of elements are: "<<iRet<<endl;
    obj.Display();
    return 0;
}