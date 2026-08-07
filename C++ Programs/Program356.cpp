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

}

int DoublyLL::Count()
{
    return iCount;
}

void DoublyLL::InsertFirst(int No)
{

}

void DoublyLL::InsertLast(int No)
{

}

void DoublyLL::InsertAtPos(int No, int iPos)
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

    iRet=obj.Count();
    cout<<"Number of elements are: "<<iRet<<endl;

    return 0;
}