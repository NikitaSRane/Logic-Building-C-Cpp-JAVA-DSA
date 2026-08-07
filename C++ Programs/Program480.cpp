//  generic doubly circular linkedlist

#include<iostream>
using namespace std;

template <class T>
struct node
{
    T data;
    struct node *next;
    struct node *prev;
};

template <class T>
class DoublyCL
{
    private:
        struct node<T> * First;
        struct node<T> *  Last;
        int iCount;

    public:
        DoublyCL();

        void Display();
        int Count();

        void InsertFirst(T No);
        void InsertLast(T No);
        void InsertAtPos(T No,int iPos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);

};

template <class T>
DoublyCL<T>::DoublyCL()
{
    First=NULL;
    Last=NULL;
    iCount=0;
}

template <class T>
void DoublyCL<T>::Display()
{
    if((First == NULL)&&(Last == NULL))
    {
        cout<<"Linkedlist id empty."<<endl;
        return;
    }
    cout<<"<=";
    do
    {
        cout<<"|"<<First->data<<"|<=>";
        First=First->next;
    }
    while(Last->next != First);

    cout<<endl;
}

template <class T>
int DoublyCL<T>::Count()
{
    return iCount;
}

template <class T>
void DoublyCL<T>::InsertFirst(T No)
{
    struct node<T> *  newn=NULL;

    newn=new struct node<T>;

    newn->data=No;
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
void DoublyCL<T>::InsertLast(T No)
{
    struct node<T> *  newn=NULL;

    newn=new struct node<T>;

    newn->data=No;
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
void DoublyCL<T>::InsertAtPos(T No,int iPos)
{
    if((iPos<1)||(iPos>iCount+1))
    {
        cout<<"Invalid position.\n";
        return;
    }
    if(iPos==1)
    {
        InsertFirst(No);
    }
    else if(iPos==iCount+1)
    {
        InsertLast(No);
    }
    else
    {
        struct node<T> *newn=NULL;
        struct node<T> *temp=NULL;
        int i=0;


        newn=new struct node<T>;

        newn->data=No;
        newn->next=NULL;
        newn->prev=NULL;

        temp=First;

        for(i=1;i<iPos-1;i++)
        {
            temp=temp->next;
        }

        newn->next=temp->next;
        temp->next->prev=newn;

        newn->prev=temp;
        temp->next=newn;

        iCount++;
    }
}

template <class T>
void DoublyCL<T>::DeleteFirst()
{
    if(First ==NULL && Last==NULL)
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
        First->prev=Last;
        Last->next=First;
    }
    iCount--;
}

template <class T>
void DoublyCL<T>::DeleteLast()
{
    if(First ==NULL && Last==NULL)
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
        Last=Last->prev;
        delete First->prev;
        Last->next=First;
        First->prev=Last;
    }
    iCount--;
}

template <class T>
void DoublyCL<T>::DeleteAtPos(int iPos)
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
        struct node<T> *temp=NULL;
        int i=0;

        temp=First;

        for(i=1;i<iPos-1;i++)
        {
            temp=temp->next;
        }
        temp->next=temp->next->next;
        delete temp->next->prev;
        temp->next->prev=temp;
        
        iCount--;
    }
}


int main()
{
    //LL of integer

    cout<<"-------------lLinkedlist of Integers-----------------"<<endl;
    DoublyCL <int>*iobj=new DoublyCL<int>();
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


    // LL of character
    cout<<"-------------lLinkedlist of characters-----------------"<<endl;
    DoublyCL <char>* cobj=new DoublyCL<char>();

    cobj->InsertFirst('c');
    cobj->InsertFirst('b');
    cobj->InsertFirst('a');
    cobj->InsertLast('d');
    cobj->InsertLast('e');
    cobj->InsertLast('f');
    cobj->Display();

    iRet=cobj->Count();
    cout<<"Number of elements are: "<<iRet<<endl;

    cobj->InsertAtPos('z',5);
    cobj->Display();

    iRet=cobj->Count();
    cout<<"Number of elements are: "<<iRet<<endl;

    cobj->DeleteAtPos(5);
    cobj->Display();


    // LL of float

    cout<<"-------------lLinkedlist of Float-----------------"<<endl;
    DoublyCL <float>* fobj=new DoublyCL<float>();

    fobj->InsertFirst(10.20f);
    fobj->InsertFirst(20.20f);
    fobj->InsertFirst(30.20f);
    fobj->InsertLast(40.20f);
    fobj->InsertLast(50.20f);
    fobj->InsertLast(60.20f);
    fobj->Display();

    iRet=fobj->Count();
    cout<<"Number of elements are: "<<iRet<<endl;

    fobj->InsertAtPos(70.20f,5);
    fobj->Display();

    iRet=fobj->Count();
    cout<<"Number of elements are: "<<iRet<<endl;

    fobj->DeleteAtPos(5);
    fobj->Display();

    iRet=fobj->Count();
    cout<<"Number of elements are: "<<iRet<<endl;

    // LL of double
    cout<<"-------------lLinkedlist of Double-----------------"<<endl;
    DoublyCL <double>* dobj=new DoublyCL<double>();

    dobj->InsertFirst(10.2012);
    dobj->InsertFirst(20.2012);
    dobj->InsertFirst(30.2030);
    dobj->InsertLast(40.2040);
    dobj->InsertLast(50.2050);
    dobj->InsertLast(60.2070);
    dobj->Display();

    iRet=dobj->Count();
    cout<<"Number of elements are: "<<iRet<<endl;

    dobj->InsertAtPos(70.20,5);
    dobj->Display();

    iRet=dobj->Count();
    cout<<"Number of elements are: "<<iRet<<endl;

    dobj->DeleteAtPos(5);
    dobj->Display();

    iRet=dobj->Count();
    cout<<"Number of elements are: "<<iRet<<endl;


    return 0;
}