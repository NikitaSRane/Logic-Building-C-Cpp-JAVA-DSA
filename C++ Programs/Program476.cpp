// Generic Singly Linear Linkedlist

#include<iostream>
using namespace std;

template <class T>
struct node
{
    T data;
    struct node *next;
};


template <class T>
class SinglyLL
{
    public:
        struct node<T> * First;// it contains address of first node
        int iCount; // for counting node elements

        SinglyLL();// constructor declaration

        void Display();
        int Count();

        void InsertFirst(T No);
        void InsertLast(T No);
        void InsertAtPos(T No, int iPos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);
};

template <class T>
SinglyLL<T>::SinglyLL() // constructor definition
{
    cout<<"Inside constructor."<<endl;
    First=NULL;
    iCount=0;
}

template <class T>
void SinglyLL<T>::Display()
{   
    struct node<T> * temp=First;
    while(temp != NULL)
    {
        cout<<"|"<<temp->data<<"|->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

template <class T>
int SinglyLL<T>::Count()
{
    return iCount;
}

template <class T>
void SinglyLL<T>::InsertFirst(T No)
{
    struct node<T> * newn=NULL;

    newn=new struct node<T>;

    newn->data=No;
    newn->next=NULL;

    if(First == NULL) // if(iCount == 0){}
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

template <class T>
void SinglyLL<T>::InsertLast(T No)
{
    struct node<T> * newn=NULL;
    struct node<T> *  temp=NULL;

    newn=new struct node<T>;

    newn->data=No;
    newn->next=NULL;

    if(First == NULL) // if(iCount == 0){}
    {
        First=newn;
    }
    else
    {
        temp=First;

        while(temp->next !=NULL)
        {
            temp=temp->next;
        }
        temp->next=newn;
    }
    iCount++;
}

template <class T>
void SinglyLL<T>::InsertAtPos(T No, int iPos)
{
    struct node<T> *  newn=NULL;
    struct node<T> *  temp=NULL;
    int i=0;

    if((iPos<1)||(iPos >iCount+1))
    {
        cout<<"Invalid position"<<endl;
        return;
    }
    if(iPos ==1 )
    {
        InsertFirst(No);
    }
    else if(iPos==iCount+1)
    {
        InsertLast(No);
    }
    else
    {
        temp=First;
        newn=new struct node<T>;

        newn->data=No;
        newn->next=NULL;

        for(i=1;i<iPos-1;i++)
        {
            temp=temp->next;
        }
        newn->next=temp->next;
        temp->next=newn;
        iCount++;
    }
}

template <class T>
void SinglyLL<T>::DeleteFirst()
{
    struct node<T> * temp=First;

    if(First==NULL)
    {
        cout<<"LL is empty.\n";
        return;
    }
    else if(First->next == NULL)
    {
        delete First;
        First=NULL;
    }
    else
    {
        First=First->next;
        delete temp;
    }
    iCount--;
}

template <class T>
void SinglyLL<T>::DeleteLast()
{
    struct node<T> * temp=NULL;

    if(First == NULL) // if(iCount == 0){}
    {
        return;
    }
    else if(First->next == NULL)
    {
        delete First;
        First=NULL;
    }
    else
    {
        temp=First;

        while(temp->next->next !=NULL)
        {
            temp=temp->next;
        }
        delete(temp->next); 
        temp->next=NULL; 
    }
    iCount--;
}

template <class T>
void SinglyLL<T>::DeleteAtPos(int iPos)
{
    struct node<T> * temp1=NULL;
    struct node<T> * temp2=NULL;
    int i=0;

    if((iPos<1)||(iPos >iCount))
    {
        cout<<"Invalid position"<<endl;
        return;
    }
    if(iPos ==1 )
    {
        DeleteFirst();
    }
    else if(iPos=iCount)
    {
        DeleteLast();
    }
    else
    {
        temp1=First;

        for(i=1;i<iPos-1;i++)
        {
            temp1=temp1->next;
        }
        temp2=temp1->next;

        temp1->next=temp2->next;
        delete temp2;

        iCount--;
    }   
}

int main()
{
    SinglyLL <int>*iobj=new SinglyLL<int>();
    int iRet=0;

    iobj->InsertFirst(51);
    iobj->InsertFirst(21);
    iobj->InsertFirst(11);
    iobj->InsertLast(101);
    iobj->InsertLast(111);
    iobj->InsertLast(121);
    iobj->Display();

    iRet=iobj->Count();
    cout<<"Number of elements are: "<<iRet<<endl;

    iobj->InsertAtPos(105,5);
    iobj->Display();

    iRet=iobj->Count();
    cout<<"Number of elements are: "<<iRet<<endl;

    iobj->DeleteAtPos(5);
    iobj->Display();

    iRet=iobj->Count();
    cout<<"Number of elements are: "<<iRet<<endl;

    return 0;
}