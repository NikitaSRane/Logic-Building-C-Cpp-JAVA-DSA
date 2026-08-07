// Generic  Singly Circular Linked List

#include<iostream>
using namespace std;

template <class T>
struct nodeSCL
{
    T data;
    struct nodeSCL * next;
};

template <class T>
class SinglyCL
{
    private:
    
        struct nodeSCL<T> * First;
        struct nodeSCL<T> * Last;
        int iCount;

    public:
    SinglyCL();

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
SinglyCL<T>::SinglyCL()
{
    First=NULL;
    Last=NULL;
    iCount=0;
}

template <class T>
void SinglyCL<T>::Display()
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

template <class T>
int SinglyCL<T>::Count()
{
    return iCount;
}

template <class T>
void SinglyCL<T>::InsertFirst(T No)
{
    struct nodeSCL<T> * newn=NULL;

    newn=new struct nodeSCL<T>;

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

template <class T>
void SinglyCL<T>::InsertLast(T No)
{
    struct nodeSCL<T> * newn=NULL;

    newn=new struct nodeSCL<T>;

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

template <class T>
void SinglyCL<T>::InsertAtPos(T No,int iPos)
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
        struct nodeSCL<T> * newn=NULL;
        struct nodeSCL<T> * temp=NULL;
        int i=0;

        newn=new struct nodeSCL<T>;

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

template <class T>
void SinglyCL<T>::DeleteFirst()
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

template <class T>
void SinglyCL<T>::DeleteLast()
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
        struct nodeSCL<T> * temp=NULL;

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

template <class T>
void SinglyCL<T>::DeleteAtPos(int iPos)
{
    if((iPos < 1)||(iPos >iCount))
    {
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
        struct nodeSCL<T> * temp1=NULL;
        struct nodeSCL<T> * temp2=NULL;
        int i=0;

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
    cout<<"-------------Singly Circular Linkedlist for Integers-----------------"<<endl;
    SinglyCL<int> *iobjsc=new SinglyCL<int>();
    int iRet=0;

    iobjsc->InsertFirst(51);
    iobjsc->InsertFirst(21);
    iobjsc->InsertFirst(11);
    iobjsc->InsertLast(101);
    iobjsc->InsertLast(111);
    iobjsc->InsertLast(121);
    iobjsc->Display();

    iRet=iobjsc->Count();
    cout<<"Number of elements are: "<<iRet<<endl;

    iobjsc->InsertAtPos(105,5);
    iobjsc->Display();

    iRet=iobjsc->Count();
    cout<<"Number of elements are: "<<iRet<<endl;

    iobjsc->DeleteAtPos(5);
    iobjsc->DeleteFirst();
    iobjsc->DeleteLast();
    iobjsc->Display();

    iRet=iobjsc->Count();
    cout<<"Number of elements are: "<<iRet<<endl;


    // LL of character
    cout<<"-------------Singly Circular Linkedlist for characters-----------------"<<endl;
    SinglyCL <char>* cobjsc=new SinglyCL<char>();

    cobjsc->InsertFirst('c');
    cobjsc->InsertFirst('b');
    cobjsc->InsertFirst('a');
    cobjsc->InsertLast('d');
    cobjsc->InsertLast('e');
    cobjsc->InsertLast('f');
    cobjsc->Display();

    iRet=cobjsc->Count();
    cout<<"Number of elements are: "<<iRet<<endl;

    cobjsc->InsertAtPos('z',5);
    cobjsc->Display();

    iRet=cobjsc->Count();
    cout<<"Number of elements are: "<<iRet<<endl;

    cobjsc->DeleteAtPos(5);
    cobjsc->DeleteFirst();
    cobjsc->DeleteLast();
    cobjsc->Display();

    iRet=cobjsc->Count();
    cout<<"Number of elements are: "<<iRet<<endl;


    // LL of float

    cout<<"-------------Singly Circular Linkedlist for Float-----------------"<<endl;
    SinglyCL <float>* fobjsc=new SinglyCL<float>();

    fobjsc->InsertFirst(10.20f);
    fobjsc->InsertFirst(20.20f);
    fobjsc->InsertFirst(30.20f);
    fobjsc->InsertLast(40.20f);
    fobjsc->InsertLast(50.20f);
    fobjsc->InsertLast(60.20f);
    fobjsc->Display();

    iRet=fobjsc->Count();
    cout<<"Number of elements are: "<<iRet<<endl;

    fobjsc->InsertAtPos(70.20f,5);
    fobjsc->Display();

    iRet=fobjsc->Count();
    cout<<"Number of elements are: "<<iRet<<endl;

    fobjsc->DeleteAtPos(5);
    fobjsc->DeleteFirst();
    fobjsc->DeleteLast();
    fobjsc->Display();

    iRet=fobjsc->Count();
    cout<<"Number of elements are: "<<iRet<<endl;

    // LL of double
    cout<<"-------------Singly Circular Linkedlist for Double-----------------"<<endl;
    SinglyCL <double>* dobjsc=new SinglyCL<double>();

    dobjsc->InsertFirst(10.2012);
    dobjsc->InsertFirst(20.2012);
    dobjsc->InsertFirst(30.2030);
    dobjsc->InsertLast(40.2040);
    dobjsc->InsertLast(50.2050);
    dobjsc->InsertLast(60.2070);
    dobjsc->Display();

    iRet=dobjsc->Count();
    cout<<"Number of elements are: "<<iRet<<endl;

    dobjsc->InsertAtPos(70.20,5);
    dobjsc->Display();

    iRet=dobjsc->Count();
    cout<<"Number of elements are: "<<iRet<<endl;

    dobjsc->DeleteAtPos(5);
    dobjsc->DeleteFirst();
    dobjsc->DeleteLast();
    dobjsc->Display();

    iRet=dobjsc->Count();
    cout<<"Number of elements are: "<<iRet<<endl;


    return 0;
}