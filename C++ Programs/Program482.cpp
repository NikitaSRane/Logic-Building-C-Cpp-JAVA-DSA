#include<iostream>
using namespace std;

////////////////////////////////////////////////////////////
//
// Code of Singly Linear Linked List
//
//////////////////////////////////////////////////////////

template <class T>
struct nodeSLL
{
    T data;
    struct nodeSLL *next;
};  


template <class T>
class SinglyLL
{
    public:
        struct nodeSLL<T> * First;// it contains address of first node
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
    struct nodeSLL<T> * temp=First;
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
    struct nodeSLL<T> * newn=NULL;

    newn=new struct nodeSLL<T>;

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
    struct nodeSLL<T> * newn=NULL;
    struct nodeSLL<T> *  temp=NULL;

    newn=new struct nodeSLL<T>;

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
    struct nodeSLL<T> *newn=NULL;
    struct nodeSLL<T> *temp=NULL;
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
        newn=new struct nodeSLL<T>;

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
    struct nodeSLL<T> *temp=First;

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
    struct nodeSLL<T> *temp=NULL;

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
    struct nodeSLL<T> * temp1=NULL;
    struct nodeSLL<T> * temp2=NULL;
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

////////////////////////////////////////////////////////////
//
// Code of Doubly Circular Linked List
//
//////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

template <class T>
struct nodeDCL
{
    T data;
    struct nodeDCL *next;
    struct nodeDCL *prev;
};

template <class T>
class DoublyCL
{
    private:
        struct nodeDCL<T> * First;
        struct nodeDCL<T> *  Last;
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
    struct nodeDCL<T> *newn=NULL;

    newn=new struct nodeDCL<T>;

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
    struct nodeDCL<T> *newn=NULL;

    newn=new struct nodeDCL<T>;

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
        struct nodeDCL<T> *newn=NULL;
        struct nodeDCL<T> *temp=NULL;
        int i=0;


        newn=new struct nodeDCL<T>;

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
        struct nodeDCL<T> *temp=NULL;
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


////////////////////////////////////////////////////////////
//
// Main Function
//
//////////////////////////////////////////////////////////


int main()
{

    
    cout<<"-------------Singly Linear Linkedlist for Integers-----------------"<<endl;
    SinglyLL <int>*iobjsl=new SinglyLL<int>();
    int iRet=0;

    iobjsl->InsertFirst(51);
    iobjsl->InsertFirst(21);
    iobjsl->InsertFirst(11);
    iobjsl->InsertLast(101);
    iobjsl->InsertLast(111);
    iobjsl->InsertLast(121);
    iobjsl->Display();

    iRet=iobjsl->Count();
    cout<<"Number of elements are: "<<iRet<<endl;

    iobjsl->InsertAtPos(105,5);
    iobjsl->Display();

    iRet=iobjsl->Count();
    cout<<"Number of elements are: "<<iRet<<endl;

    iobjsl->DeleteAtPos(5);
    iobjsl->DeleteFirst();
    iobjsl->DeleteLast();
    iobjsl->Display();

    iRet=iobjsl->Count();
    cout<<"Number of elements are: "<<iRet<<endl;


    // LL of character
    cout<<"-------------Singly Linear Linkedlist for characters-----------------"<<endl;
    SinglyLL <char>* cobjsl=new SinglyLL<char>();

    cobjsl->InsertFirst('c');
    cobjsl->InsertFirst('b');
    cobjsl->InsertFirst('a');
    cobjsl->InsertLast('d');
    cobjsl->InsertLast('e');
    cobjsl->InsertLast('f');
    cobjsl->Display();

    iRet=cobjsl->Count();
    cout<<"Number of elements are: "<<iRet<<endl;

    cobjsl->InsertAtPos('z',5);
    cobjsl->Display();

    iRet=cobjsl->Count();
    cout<<"Number of elements are: "<<iRet<<endl;

    cobjsl->DeleteAtPos(5);
    cobjsl->DeleteFirst();
    cobjsl->DeleteLast();
    cobjsl->Display();

    iRet=cobjsl->Count();
    cout<<"Number of elements are: "<<iRet<<endl;


    // LL of float

    cout<<"-------------Singly Linear Linkedlist for Float-----------------"<<endl;
    SinglyLL <float>* fobjsl=new SinglyLL<float>();

    fobjsl->InsertFirst(10.20f);
    fobjsl->InsertFirst(20.20f);
    fobjsl->InsertFirst(30.20f);
    fobjsl->InsertLast(40.20f);
    fobjsl->InsertLast(50.20f);
    fobjsl->InsertLast(60.20f);
    fobjsl->Display();

    iRet=fobjsl->Count();
    cout<<"Number of elements are: "<<iRet<<endl;

    fobjsl->InsertAtPos(70.20f,5);
    fobjsl->Display();

    iRet=fobjsl->Count();
    cout<<"Number of elements are: "<<iRet<<endl;

    fobjsl->DeleteAtPos(5);
    fobjsl->DeleteFirst();
    fobjsl->DeleteLast();
    fobjsl->Display();

    iRet=fobjsl->Count();
    cout<<"Number of elements are: "<<iRet<<endl;

    // LL of double
    cout<<"-------------Singly Linear Linkedlist for Double-----------------"<<endl;
    SinglyLL <double>* dobjsl=new SinglyLL<double>();

    dobjsl->InsertFirst(10.2012);
    dobjsl->InsertFirst(20.2012);
    dobjsl->InsertFirst(30.2030);
    dobjsl->InsertLast(40.2040);
    dobjsl->InsertLast(50.2050);
    dobjsl->InsertLast(60.2070);
    dobjsl->Display();

    iRet=dobjsl->Count();
    cout<<"Number of elements are: "<<iRet<<endl;

    dobjsl->InsertAtPos(70.20,5);
    dobjsl->Display();

    iRet=dobjsl->Count();
    cout<<"Number of elements are: "<<iRet<<endl;

    dobjsl->DeleteAtPos(5);
    dobjsl->DeleteFirst();
    dobjsl->DeleteLast();
    dobjsl->Display();

    iRet=dobjsl->Count();
    cout<<"Number of elements are: "<<iRet<<endl;

    cout<<"==================================================================="<<endl;

    cout<<"-------------Doubly Circular Linkedlist for Integers-----------------"<<endl;
    DoublyCL <int>*iobjdc=new DoublyCL<int>();

    iobjdc->InsertFirst(51);
    iobjdc->InsertFirst(21);
    iobjdc->InsertFirst(11);
    iobjdc->InsertLast(101);
    iobjdc->InsertLast(111);
    iobjdc->InsertLast(121);
    iobjdc->Display();

    iRet=iobjdc->Count();
    cout<<"Number of elements are: "<<iRet<<endl;

    iobjdc->InsertAtPos(105,5);
    iobjdc->Display();

    iRet=iobjdc->Count();
    cout<<"Number of elements are: "<<iRet<<endl;

    iobjdc->DeleteAtPos(5);
    iobjdc->DeleteFirst();
    iobjdc->DeleteLast();
    iobjdc->Display();

    iRet=iobjdc->Count();
    cout<<"Number of elements are: "<<iRet<<endl;


    // LL of character
    cout<<"-------------Doubly Circular Linkedlist for characters-----------------"<<endl;
    DoublyCL <char>* cobjdc=new DoublyCL<char>();

    cobjdc->InsertFirst('c');
    cobjdc->InsertFirst('b');
    cobjdc->InsertFirst('a');
    cobjdc->InsertLast('d');
    cobjdc->InsertLast('e');
    cobjdc->InsertLast('f');
    cobjdc->Display();

    iRet=cobjdc->Count();
    cout<<"Number of elements are: "<<iRet<<endl;

    cobjdc->InsertAtPos('z',5);
    cobjdc->Display();

    iRet=cobjdc->Count();
    cout<<"Number of elements are: "<<iRet<<endl;

    cobjdc->DeleteAtPos(5);
    cobjdc->DeleteFirst();
    cobjdc->DeleteLast();
    cobjdc->Display();

    iRet=cobjdc->Count();
    cout<<"Number of elements are: "<<iRet<<endl;


    // LL of float

    cout<<"-------------Doubly Circular Linkedlist for Float-----------------"<<endl;
    DoublyCL <float>* fobjdc=new DoublyCL<float>();

    fobjdc->InsertFirst(10.20f);
    fobjdc->InsertFirst(20.20f);
    fobjdc->InsertFirst(30.20f);
    fobjdc->InsertLast(40.20f);
    fobjdc->InsertLast(50.20f);
    fobjdc->InsertLast(60.20f);
    fobjdc->Display();

    iRet=fobjdc->Count();
    cout<<"Number of elements are: "<<iRet<<endl;

    fobjdc->InsertAtPos(70.20f,5);
    fobjdc->Display();

    iRet=fobjdc->Count();
    cout<<"Number of elements are: "<<iRet<<endl;

    fobjdc->DeleteAtPos(5);
    fobjdc->DeleteFirst();
    fobjdc->DeleteLast();
    fobjdc->Display();

    iRet=fobjdc->Count();
    cout<<"Number of elements are: "<<iRet<<endl;

    // LL of double
    cout<<"-------------Doubly Circular Linkedlist for Double-----------------"<<endl;
    DoublyCL <double>* dobjdc=new DoublyCL<double>();

    dobjdc->InsertFirst(10.2012);
    dobjdc->InsertFirst(20.2012);
    dobjdc->InsertFirst(30.2030);
    dobjdc->InsertLast(40.2040);
    dobjdc->InsertLast(50.2050);
    dobjdc->InsertLast(60.2070);
    dobjdc->Display();

    iRet=dobjdc->Count();
    cout<<"Number of elements are: "<<iRet<<endl;

    dobjdc->InsertAtPos(70.20,5);
    dobjdc->Display();

    iRet=dobjdc->Count();
    cout<<"Number of elements are: "<<iRet<<endl;

    dobjdc->DeleteAtPos(5);
    dobjdc->DeleteFirst();
    dobjdc->DeleteLast();
    dobjdc->Display();

    iRet=dobjdc->Count();
    cout<<"Number of elements are: "<<iRet<<endl;


    return 0;
}