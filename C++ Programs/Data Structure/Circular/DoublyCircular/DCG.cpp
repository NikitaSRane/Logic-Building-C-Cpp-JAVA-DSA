#include<iostream>
using namespace std;

template <class T>
struct node
{
    T data;
    struct node * next;
    struct node * prev;
};


template <class T>
class DoublyCLL
{
    public:

    int iCount;
    struct node<T> * First;
    struct node<T> * Last;

    DoublyCLL();
    void InsertFirst(T);
    void InsertLast(T);
    void DeleteFirst();
    void DeleteLast();
    void InsertAtPos(T,int);
    void DeleteAtPos(int);
    void Display();
    int Count();
};

template <class T>
DoublyCLL<T>::DoublyCLL()
{
    iCount=0;
    First=NULL;
    Last=NULL;
}

template <class T>
void DoublyCLL<T>::InsertFirst(T iNo)
{
    struct node<T> * newn=NULL;
    newn=new struct node<T>;

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

template <class T>
void DoublyCLL<T>::InsertLast(T iNo)
{
    
    struct node<T> * newn=NULL;
    newn=new struct node<T>;

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
        Last->next=newn;
        newn->prev=Last;
        Last=newn;
    }
    Last->next=First;
    First->prev=Last;
    iCount++;

}

template <class T>
void DoublyCLL<T>::DeleteFirst()
{
    if((First == NULL)&&(Last == NULL))
    {
        cout<<"Unable to delete as linkedlist is empty\n ";
        return;
    }
    if(First == Last)
    {
        delete First;
        First=NULL;
        Last=NULL;
    }
    else
    {
        First=First->next;
        delete Last->next;
        First->prev=Last;
        Last->next=First;
    }

    iCount--;
}

template <class T>
void DoublyCLL<T>::DeleteLast()
{
    if((First == NULL)&&(Last == NULL))
    {
        cout<<"Unable to delete as linkedlist is empty\n ";
        return;
    }
    if(First == Last)
    {
        delete First;
        First=NULL;
        Last=NULL;
    }
    else
    {
        Last=Last->prev;
        delete First->prev;
        First->prev=Last;
        Last->next=First;
    }

    iCount--;
}

template <class T>
void DoublyCLL<T>::InsertAtPos(T iNo, int iPos)
{

    struct node<T> * newn=NULL;
    newn=new struct node<T>;

    newn->data=iNo;
    newn->prev=NULL;
    newn->next=NULL;

    if((iPos < 1 )||(iPos > iCount+1))
    {
        cout<<"Invalid position\n";
        return;
    }
    if(iPos == 1)
    {
        InsertFirst(iNo);
    }
    else if(iPos == iCount+1)
    {
        InsertLast(iNo);
    }
    else
    {
        int iCnt=0;
        struct node<T> * temp=First;

        for(iCnt=1;iCnt<iPos-1;iCnt++)
        {
            temp=temp->next;
        }
        newn->next=temp->next;
        newn->prev=temp;
        temp->next=newn;
        temp->next->prev=newn;

        iCount++;
    }
}

template <class T>
void DoublyCLL<T>::DeleteAtPos(int iPos)
{

    if((iPos<1)||(iPos>iCount))
    {
        cout<<"Invalid position.\n";
        return;
    }
    if(iPos==1)
    {
        DeleteFirst();
    }
    else if(iPos==iCount)
    {
        DeleteLast();
    }
    else
    {
        struct node<T> * temp=First;
        struct node<T> * temp2=NULL;
        int i=0;

        for(i=1;i<iPos-1;i++)
        {
            temp=temp->next;
        }
        temp2=temp->next;
        temp->next=temp2->next;
        temp2->next->prev=temp;
        delete temp2;

        iCount--;
    }
}

template <class T>
void DoublyCLL<T>::Display()
{
    if((First == NULL)&&(Last == NULL))
    {
        cout<<"Linkedlist is empty."<<endl;
        return;
    }
    do
    {
        cout<<First->data<<"<=>";
        First=First->next;
    }
    while(First != Last->next);
    cout<<endl;
}

template <class T>
int DoublyCLL<T>::Count()
{
    return iCount;
}

int main()
{
    DoublyCLL<int> obj;
    int iRet=0;
    obj.Display();
    obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertFirst(11);
    obj.InsertLast(101);
    obj.InsertLast(111);
    obj.Display();
    iRet=obj.Count();
    cout<<"Number of elements are: "<<iRet<<endl;
    obj.DeleteFirst();
    obj.Display();
    iRet=obj.Count();
    cout<<"Number of elements are: "<<iRet<<endl;
    obj.DeleteLast();
    obj.Display();
    iRet=obj.Count();
    cout<<"Number of elements are: "<<iRet<<endl;
    obj.InsertAtPos(31,3);
    obj.Display();
    iRet=obj.Count();
    cout<<"Number of elements are: "<<iRet<<endl;
    obj.DeleteAtPos(3);
    obj.Display();
    iRet=obj.Count();
    cout<<"Number of elements are: "<<iRet<<endl;
    return 0;
}