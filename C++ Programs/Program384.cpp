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

    if((First==NULL)&&(Last==NULL))
    {
        return;
    }
    do
    {
        cout<<"|"<<First->data<<"|->";
        First=First->next;
    }
    while(First !=Last->next);
    cout<<endl;

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
        Last->next=newn;
        Last=newn;
    }
    Last->next=First;
    iCount++;
    
}
void SinglyCL::InsertAtPos(int No,int iPos)
{
    if((iPos < 1)||(iPos >iCount+1))
    {
        return;
    }
    if(iPos == 1)
    {
        InsertFirst(No);
    }
    else if(iPos == iCount+1)
    {
        InsertLast(No);
    }
    else
    {
        PNODE newn=NULL;
        PNODE temp=NULL;
        int i=0;

        newn=new NODE;

        newn->data=No;
        newn->next=NULL;

        temp=First;

        for(i=1;i<iPos-1;i++)
        {
            temp=temp->next;
        }

        newn->next=temp->next;
        temp->next=newn;
        iCount++;
    }
}

void SinglyCL::DeleteFirst()
{
    if((First==NULL)&&(Last==NULL))
    {
        return;
    }
    else if(First==Last)
    {
        delete First;
        First=NULL;
        Last=NULL;
    }
    else
    {
        First=First->next;
        delete Last->next;
        Last-> next=First;
    }
    iCount--;
}
void SinglyCL::DeleteLast()
{
    
    if((First==NULL)&&(Last==NULL))
    {
        return;
    }
    else if(First==Last)
    {
        delete First;
        First=NULL;
        Last=NULL;
    }
    else
    {
        PNODE temp=NULL;

        temp=First;

        while(temp->next != Last)
        {
            temp=temp->next;
        }
        temp->next=First;
        delete Last;
        Last=temp;
    }
    iCount--;
    
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

    obj.InsertLast(101);
    obj.InsertLast(111);
    obj.InsertLast(121);

    obj.Display();
    iRet=obj.Count();
    cout<<"Number of elements are: "<<iRet<<endl;

    obj.InsertAtPos(105,5);
    obj.Display();
    iRet=obj.Count();
    cout<<"Number of elements are: "<<iRet<<endl;

    return 0;
}