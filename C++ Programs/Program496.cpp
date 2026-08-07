// Generic stack

#include<iostream>
using namespace std;

template <class T>
struct nodeS
{
    T data;
    struct nodeS *next;
};

template <class T>
class Stack
{
    private:
        struct nodeS<T> * First;
        int iCount;

    public:
        Stack();
        void Display();
        int Count();

        void Push(T No); //void InsertFirst(int No);
        int Pop(); // void DeleteFirst();

};

template <class T>
Stack<T>::Stack()
{
    First=NULL;
    iCount=0;
}

template <class T>
void Stack<T>::Display()
{
    cout<<"Elements of stack are: \n";

    struct nodeS<T> * temp=NULL;
    temp=First;

    while(temp !=NULL)
    {
        cout<<temp->data<<"\n";
        temp=temp->next;
    }
    cout<<endl;
}

template <class T>
int Stack<T>::Count()
{
    return iCount;
}


template <class T>
void Stack<T>::Push(T No)
{
    struct nodeS<T> * newn=NULL;

    newn=new struct nodeS<T>;

    newn->data=No;
    newn->next=NULL;

    if(First==NULL)
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
int Stack<T>::Pop()
{
    int iValue=0;
    struct nodeS<T> * temp=NULL;

    if(First==NULL)
    {
        cout<<"Unable to pop the elements as stack is empty."<<endl;
        return -1;
    }
    else
    {
        temp=First;

        iValue=First->data;
        First=First->next;
        delete temp;

        iCount--;
    }

    return iValue;
} 

int main()
{
    cout<<"-------------  Stack for Integer-----------------"<<endl;
    Stack<int> *iobjs= new Stack<int>();
    int iRet=0;

    iobjs->Push(10);
    iobjs->Push(20);
    iobjs->Push(30);
    iobjs->Push(40);

    iobjs->Display();

    iRet=iobjs->Count();
    cout<<"Number of elements: "<<iRet<<endl;

    iRet=iobjs->Pop();
    cout<<"Popped element is: "<<iRet<<endl;;
    iobjs->Display();

    iRet=iobjs->Count();
    cout<<"Number of elements: "<<iRet<<endl;

    iobjs->Push(50);

    iobjs->Display();

    iRet=iobjs->Count();
    cout<<"Number of elements: "<<iRet<<endl;


    cout<<"-------------  Stack for Character-----------------"<<endl;
    Stack<char> *cobjs= new Stack<char>();

    cobjs->Push('s');
    cobjs->Push('m');
    cobjs->Push('k');
    cobjs->Push('r');

    cobjs->Display();

    iRet=cobjs->Count();
    cout<<"Number of elements: "<<iRet<<endl;

    iRet=cobjs->Pop();
    cout<<"Popped element is: "<<iRet<<endl;;
    cobjs->Display();

    iRet=cobjs->Count();
    cout<<"Number of elements: "<<iRet<<endl;

    cobjs->Push('z');

    cobjs->Display();

    iRet=cobjs->Count();
    cout<<"Number of elements: "<<iRet<<endl;

    cout<<"-------------  Stack for  Float-----------------"<<endl;
    Stack<float> *fobjs= new Stack<float>();

    fobjs->Push(10.20f);
    fobjs->Push(20.45f);
    fobjs->Push(30.0f);
    fobjs->Push(40.52f);

    fobjs->Display();

    iRet=fobjs->Count();
    cout<<"Number of elements: "<<iRet<<endl;

    iRet=fobjs->Pop();
    cout<<"Popped element is: "<<iRet<<endl;;
    fobjs->Display();

    iRet=fobjs->Count();
    cout<<"Number of elements: "<<iRet<<endl;

    fobjs->Push(1.45f);

    fobjs->Display();

    iRet=fobjs->Count();
    cout<<"Number of elements: "<<iRet<<endl;


    cout<<"-------------  Stack for  Double-----------------"<<endl;
    Stack<double> *dobjs= new Stack<double>();

    dobjs->Push(10.20);
    dobjs->Push(20.45);
    dobjs->Push(30.0);
    dobjs->Push(40.52);

    dobjs->Display();

    iRet=dobjs->Count();
    cout<<"Number of elements: "<<iRet<<endl;

    iRet=dobjs->Pop();
    cout<<"Popped element is: "<<iRet<<endl;;
    dobjs->Display();

    iRet=dobjs->Count();
    cout<<"Number of elements: "<<iRet<<endl;

    dobjs->Push(1.45);

    dobjs->Display();

    iRet=dobjs->Count();
    cout<<"Number of elements: "<<iRet<<endl;

    return 0;
}