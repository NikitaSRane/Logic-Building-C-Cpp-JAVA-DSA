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

}
int DoublyLL::Count()
{
    return iCount;
}
void DoublyLL::InsertFirst(int iNo)
{

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
    iRet=obj.Count();
    cout<<"Number of elements are: "<<iRet<<endl;
    return 0;
}