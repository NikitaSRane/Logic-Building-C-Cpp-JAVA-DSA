#include<iostream>
using namespace std;

template <class T>
struct node
{
    T data;
    struct node * next;
};

template <class T>
class SinglyCLL
{
    public:

    int iCount;
    struct node<T> * First;
    struct node<T> * Last;

    SinglyCLL();
    void InsertFirst(T);
    void InsertLast(T);
    void InsertAtPos(T, int);

    void Display();
    int Count();

    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPos(int);
};

template <class T>
SinglyCLL<T>::SinglyCLL()
{
    iCount=0;
    First=NULL;
    Last=NULL;
}

template <class T>
void SinglyCLL<T>::InsertFirst(T iNo)
{
    struct node<T> * newn=NULL;

    newn=new struct node<T>;

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

template <class T>
void SinglyCLL<T>::InsertLast(T iNo)
{
    struct node<T> * newn=NULL;

    newn=new struct node<T>;

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

template <class T>
void SinglyCLL<T>::InsertAtPos(T iNo, int iPos)
{
    struct node<T> * newn=NULL;

    newn=new struct node<T>;

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
        struct node<T> * temp=First;

        for(iCnt=1;iCnt<iPos-1;iCnt++)
        {
            temp=temp->next;
        }
        newn->next=temp->next;
        temp->next=newn;

        iCount++;
    }
}

template <class T>
void SinglyCLL<T>::Display()
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

template <class T>
int SinglyCLL<T>::Count()
{
    return iCount;
}

template <class T>
void SinglyCLL<T>::DeleteFirst()
{
    if((First == NULL)&&(Last == NULL))
    {
        cout<<"Unable to delete as linkedlist is empty\n";
        return;
    }
    if(First == Last)
    {
        delete(First);
        First=NULL;
        Last=NULL;
    }
    else
    {
        First=First->next;
        delete(Last->next);
    }
    Last->next=First;

    iCount--;
}

template <class T>
void SinglyCLL<T>::DeleteLast()
{
    if((First == NULL)&&(Last == NULL))
    {
        cout<<"Unable to delete as linkedlist is empty\n";
        return;
    }
    if(First == Last)
    {
        delete(First);
        First=NULL;
        Last=NULL;
    }
    else
    {
        struct node<T> * temp=First;

        while(temp->next != Last)
        {
            temp=temp->next;
        }
        delete(temp->next);
        Last=temp;
    }
    Last->next=First;

    iCount--;
}

template <class T>
void SinglyCLL<T>::DeleteAtPos(int iPos)
{
    int iLength=Count();

    if((iPos < 0)||(iPos > iLength+1))
    {
        cout<<"Invalid position\n";
        return;
    }
    if(iPos == 1)
    {
        DeleteFirst();
    }
    else if(iPos == iLength+1)
    {
        DeleteLast();
    }
    else
    {
        int iCnt=0;
        struct node<T> * temp=First;
        struct node<T> * temp2=NULL;
        for(iCnt=1;iCnt<iPos-1;iCnt++)
        {
            temp=temp->next;
        }
        temp2=temp->next;
        temp->next=temp2->next;
        delete(temp2);

        iCount--;
    }
}

int main()
{
    SinglyCLL<float> obj;
    int iRet=0;
    obj.InsertFirst(12.34);
    obj.InsertFirst(15.09);
    obj.InsertLast(90.23);
    obj.InsertLast(65.687678);
    obj.Display();
    iRet=obj.Count();
    cout<<"Number of elements are: "<<iRet<<endl;
    obj.InsertAtPos(4.8,2);
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
    obj.DeleteAtPos(2);
    obj.Display();
    iRet=obj.Count();
    cout<<"Number of elements are: "<<iRet<<endl;
    return 0;
}