#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node * next;
};

typedef struct node NODE;
typedef struct node * PNODE;

class SinglyCLL
{
    public:

    int iCount;
    PNODE First;
    PNODE Last;

    SinglyCLL();
    void InsertFirst(int);
    void InsertLast(int);
    void InsertAtPos(int, int);

    void Display();
    int Count();

    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPos(int);
};

SinglyCLL::SinglyCLL()
{
    iCount=0;
    First=NULL;
    Last=NULL;
}
void SinglyCLL::InsertFirst(int iNo)
{

}
void SinglyCLL::InsertLast(int iNo)
{

}
void SinglyCLL::InsertAtPos(int iNO, int iPos)
{

}

void SinglyCLL::Display()
{

}
int SinglyCLL::Count()
{
    return iCount;
}

void SinglyCLL::DeleteFirst()
{

}
void SinglyCLL::DeleteLast()
{

}
void SinglyCLL::DeleteAtPos(int iPos)
{

}

int main()
{
    SinglyCLL obj;
    int iRet=0;
    iRet=obj.Count();
    cout<<"Number of elements are: "<<iRet<<endl;
    return 0;
}