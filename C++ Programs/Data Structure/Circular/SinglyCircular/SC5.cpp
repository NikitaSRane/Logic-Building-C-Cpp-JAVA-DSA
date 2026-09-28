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
    PNODE newn=NULL;

    newn=new NODE;

    newn->data=iNo;
    newn->next=NULL;

    if((First == NULL)&&(Last == NULL))
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
void SinglyCLL::InsertLast(int iNo)
{
    PNODE newn=NULL;

    newn=new NODE;

    newn->data=iNo;
    newn->next=NULL;

    if((First == NULL)&&(Last == NULL))
    {
        First=newn;
        Last=newn;
    }
    else
    {
        Last->next=newn;
        Last=newn;
    }
    Last->next=First;

    iCount++;
}
void SinglyCLL::InsertAtPos(int iNo, int iPos)
{
    PNODE newn=NULL;

    newn=new NODE;

    newn->data=iNo;
    newn->next=NULL;

    int iLength=Count();

    if((iPos < 0)||(iPos > iLength+1))
    {
        cout<<"Invalid position"<<endl;
        return;
    }
    if(iPos == 1)
    {
        InsertFirst(iNo);
    }
    else if(iPos == iLength+1)
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
        temp->next=newn;

        iCount++;
    }
}

void SinglyCLL::Display()
{
    cout<<"->";
    do
    {
        cout<<First->data<<"->";
        First=First->next;
    }
    while(First != Last->next);
    cout<<endl;
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
    obj.InsertFirst(34);
    obj.InsertFirst(15);
    obj.InsertLast(90);
    obj.InsertLast(65);
    obj.Display();
    iRet=obj.Count();
    cout<<"Number of elements are: "<<iRet<<endl;
    obj.InsertAtPos(48,2);
    obj.Display();
    iRet=obj.Count();
    cout<<"Number of elements are: "<<iRet<<endl;
    return 0;
}