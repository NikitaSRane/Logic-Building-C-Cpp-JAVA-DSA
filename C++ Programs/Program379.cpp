#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node * next;
};

typedef struct node NODE;
typedef struct node * PNODE;

class SinglyCL
{
    public:
        PNODE First;
        PNODE Last;
        int iCount;
    
    SinglyCL();

    void Display();
    int Count();
    void InsertFirst(int No);
    void InsertLast(int No);
    void InsertAtPos(int No,int iPos);

    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPos(int iPos);
};

SinglyCL::SinglyCL()
{
    First=NULL;
    Last=NULL;
    iCount=0;
}

void SinglyCL::Display()
{

}
int SinglyCL::Count()
{
    return iCount;
}
void SinglyCL::InsertFirst(int No)
{
    PNODE newn=NULL;

    newn=new NODE;

    newn->data=No;
    newn->next=NULL;

    if((First==NULL)&&(Last==NULL))
    {
        First=newn;
        Last=newn;
    }
    else
    {
        newn->next=First;
        First=newn;     
    }
    Last->next=First;
    iCount++;
    
}
void SinglyCL::InsertLast(int No)
{

}
void SinglyCL::InsertAtPos(int No,int iPos)
{

}

void SinglyCL::DeleteFirst()
{

}
void SinglyCL::DeleteLast()
{

}
void SinglyCL::DeleteAtPos(int iPos)
{

}

int main()
{
    SinglyCL obj;
    int iRet=0;

    obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertFirst(11);

    iRet=obj.Count();
    cout<<"Number of elements are: "<<iRet<<endl;

    return 0;
}