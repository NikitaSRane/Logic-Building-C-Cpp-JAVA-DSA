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

class DoublyLL
{
    public:
        PNODE First;
        int iCount;

        DoublyLL();

        void Display();
        int Count();

        void InsertFirst(int No);
        void InsertLast(int No);
        void InsertAtPos(int No, int iPos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);
};

DoublyLL::DoublyLL()
{
    cout<<"Inside constructor.\n";
    First=NULL;
    iCount=0;
}

void DoublyLL::Display()
{
    PNODE temp=NULL;

    temp=First;

    cout<<"NULL|<=>";
    while(temp != NULL)
    {
        cout<<temp->data<<"|<=>|";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

int DoublyLL::Count()
{
    return iCount;
}

void DoublyLL::InsertFirst(int No)
{
    PNODE newn=NULL;

    newn=new NODE;

    newn->data=No;
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

void DoublyLL::InsertLast(int No)
{
    PNODE newn=NULL;

    newn=new NODE;

    newn->data=No;
    newn->next=NULL;
    newn->prev=NULL;

    if(First == NULL)
    {
        First=newn;
    }
    else
    {   
        PNODE temp=NULL;

        temp=First;

        while(temp->next != NULL)
        {
            temp=temp->next;
        }
        temp->next=newn;
        newn->prev=temp; // temp->next->prev=temp;
    }
    iCount++;
}

void DoublyLL::InsertAtPos(int No, int iPos)
{

}

void DoublyLL::DeleteFirst()
{
    if(First == NULL)// if(iCount == 0){}
    {
        return;
    }
    if(First->next == NULL)// if(iCount == 1){}
    {
        delete First;
        First=NULL;
    }
    else
    {
        First=First->next;
        delete First->prev;
        First->prev=NULL;
    }
    iCount--;
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

    obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertFirst(11);

    obj.InsertLast(101);
    obj.InsertLast(111);
    obj.InsertLast(121);
    obj.Display();

    iRet=obj.Count();
    cout<<"Number of elements are: "<<iRet<<endl;

    obj.DeleteFirst();
    obj.Display();

    iRet=obj.Count();
    cout<<"Number of elements are: "<<iRet<<endl;

    return 0;
}