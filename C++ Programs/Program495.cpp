// Generic Doubly Linear Linked List

#include<iostream>
using namespace std;

template <class T>
struct nodeDLL
{
    T data;
    struct nodeDLL * next;
    struct nodeDLL * prev;
};

template <class T>
class DoublyLL
{
    private:
        struct nodeDLL<T> * First;
        int iCount;
    public:
        DoublyLL();

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
DoublyLL<T>::DoublyLL()
{
    cout<<"Inside constructor.\n";
    First=NULL;
    iCount=0;
}

template <class T>
void DoublyLL<T>::Display()
{
    struct nodeDLL<T> * temp=NULL;

    temp=First;

    cout<<"NULL|<=>";
    while(temp != NULL)
    {
        cout<<temp->data<<"|<=>|";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

template <class T>
int DoublyLL<T>::Count()
{
    return iCount;
}

template <class T>
void DoublyLL<T>::InsertFirst(T No)
{
    struct nodeDLL<T> * newn=NULL;

    newn=new struct nodeDLL<T>;

    newn->data=No;
    newn->next=NULL;
    newn->prev=NULL;

    if(First == NULL)
    {
        First=newn;
    }
    else
    {   
        newn->next=First;
        First->prev=newn;
        First=newn;
    }
    iCount++;
}

template <class T>
void DoublyLL<T>::InsertLast(T No)
{
    struct nodeDLL<T> * newn=NULL;

    newn=new struct nodeDLL<T>;

    newn->data=No;
    newn->next=NULL;
    newn->prev=NULL;

    if(First == NULL)
    {
        First=newn;
    }
    else
    {   
        struct nodeDLL<T> * temp=NULL;

        temp=First;

        while(temp->next != NULL)
        {
            temp=temp->next;
        }
        temp->next=newn;
        newn->prev=temp; // temp->next->prev=temp;
    }
    iCount++;
}

template <class T>
void DoublyLL<T>::InsertAtPos(T No, int iPos)
{
    if((iPos < 1)||(iPos >iCount+1))
    {
        cout<<"Invalid position."<<endl;
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
        struct nodeDLL<T> * newn=NULL;
        struct nodeDLL<T> * temp=NULL;
        int i=0;

        newn=new struct nodeDLL<T>;

        newn->data=No;
        newn->next=NULL;
        newn->prev=NULL;

        temp=First;

        for(i=1;i<iPos-1;i++)
        {
            temp=temp->next;
        }
        newn->next=temp->next;
        newn->next->prev=newn;
        newn->prev=temp;
        temp->next=newn;


    }
    iCount++;
}

template <class T>
void DoublyLL<T>::DeleteFirst()
{
    if(First == NULL)// if(iCount == 0){}
    {
        return;
    }
    if(First->next == NULL)// if(iCount == 1){}
    {
        delete First;
        First=NULL;
    }
    else
    {
        First=First->next;
        delete First->prev;
        First->prev=NULL;
    }
    iCount--;
}

template <class T>
void DoublyLL<T>::DeleteLast()
{
    if(First == NULL)// if(iCount == 0){}   
    {
        return;
    }
    if(First->next == NULL)// if(iCount == 1){}
    {
        delete First;
        First=NULL;
    }
    else
    {
        struct nodeDLL<T> * temp=First;

        while(temp->next->next != NULL)
        {
            temp=temp->next;
        }
        delete temp->next;
        temp->next=NULL;
    }
    iCount--;
}

template <class T>
void DoublyLL<T>::DeleteAtPos(int iPos)
{
    if((iPos < 1)||(iPos >iCount))
    {
        cout<<"Invalid position."<<endl;
        return;
    }
    if(iPos == 1)
    {
        DeleteFirst();
    }
    else if(iPos == iCount)
    {
        DeleteLast();
    }
    else
    {
        struct nodeDLL<T> * temp1=NULL;
        struct nodeDLL<T> * temp2=NULL;

        int i=0;

        temp1=First;

        for(i=1;i<iPos-1;i++)
        {
            temp1=temp1->next;
        }
        temp2=temp1->next;

        temp1->next=temp2->next;
        temp2->next=temp1;
        delete temp2;

        iCount--;
    }
}

int main()
{
    cout<<"-------------Doubly Linear Linkedlist for Integers-----------------"<<endl;
    DoublyLL<int> *iobjdl=new DoublyLL<int>();
    int iRet=0;

    iobjdl->InsertFirst(51);
    iobjdl->InsertFirst(21);
    iobjdl->InsertFirst(11);
    iobjdl->InsertLast(101);
    iobjdl->InsertLast(111);
    iobjdl->InsertLast(121);
    iobjdl->Display();

    iRet=iobjdl->Count();
    cout<<"Number of elements are: "<<iRet<<endl;

    iobjdl->InsertAtPos(105,5);
    iobjdl->Display();

    iRet=iobjdl->Count();
    cout<<"Number of elements are: "<<iRet<<endl;

    iobjdl->DeleteAtPos(5);
    iobjdl->DeleteFirst();
    iobjdl->DeleteLast();
    iobjdl->Display();

    iRet=iobjdl->Count();
    cout<<"Number of elements are: "<<iRet<<endl;


    // LL of character
    cout<<"-------------Doubly Linear Linkedlist for characters-----------------"<<endl;
    DoublyLL <char>* cobjdl=new DoublyLL<char>();

    cobjdl->InsertFirst('c');
    cobjdl->InsertFirst('b');
    cobjdl->InsertFirst('a');
    cobjdl->InsertLast('d');
    cobjdl->InsertLast('e');
    cobjdl->InsertLast('f');
    cobjdl->Display();

    iRet=cobjdl->Count();
    cout<<"Number of elements are: "<<iRet<<endl;

    cobjdl->InsertAtPos('z',5);
    cobjdl->Display();

    iRet=cobjdl->Count();
    cout<<"Number of elements are: "<<iRet<<endl;

    cobjdl->DeleteAtPos(5);
    cobjdl->DeleteFirst();
    cobjdl->DeleteLast();
    cobjdl->Display();

    iRet=cobjdl->Count();
    cout<<"Number of elements are: "<<iRet<<endl;


    // LL of float

    cout<<"-------------Doubly Linear Linkedlist for Float-----------------"<<endl;
    DoublyLL <float>* fobjdl=new DoublyLL<float>();

    fobjdl->InsertFirst(10.20f);
    fobjdl->InsertFirst(20.20f);
    fobjdl->InsertFirst(30.20f);
    fobjdl->InsertLast(40.20f);
    fobjdl->InsertLast(50.20f);
    fobjdl->InsertLast(60.20f);
    fobjdl->Display();

    iRet=fobjdl->Count();
    cout<<"Number of elements are: "<<iRet<<endl;

    fobjdl->InsertAtPos(70.20f,5);
    fobjdl->Display();

    iRet=fobjdl->Count();
    cout<<"Number of elements are: "<<iRet<<endl;

    fobjdl->DeleteAtPos(5);
    fobjdl->DeleteFirst();
    fobjdl->DeleteLast();
    fobjdl->Display();

    iRet=fobjdl->Count();
    cout<<"Number of elements are: "<<iRet<<endl;

    // LL of double
    cout<<"-------------Doubly Linear Linkedlist for Double-----------------"<<endl;
    DoublyLL <double>* dobjdl=new DoublyLL<double>();

    dobjdl->InsertFirst(10.2012);
    dobjdl->InsertFirst(20.2012);
    dobjdl->InsertFirst(30.2030);
    dobjdl->InsertLast(40.2040);
    dobjdl->InsertLast(50.2050);
    dobjdl->InsertLast(60.2070);
    dobjdl->Display();

    iRet=dobjdl->Count();
    cout<<"Number of elements are: "<<iRet<<endl;

    dobjdl->InsertAtPos(70.20,5);
    dobjdl->Display();

    iRet=dobjdl->Count();
    cout<<"Number of elements are: "<<iRet<<endl;

    dobjdl->DeleteAtPos(5);
    dobjdl->DeleteFirst();
    dobjdl->DeleteLast();
    dobjdl->Display();

    iRet=dobjdl->Count();
    cout<<"Number of elements are: "<<iRet<<endl;

    return 0;

}