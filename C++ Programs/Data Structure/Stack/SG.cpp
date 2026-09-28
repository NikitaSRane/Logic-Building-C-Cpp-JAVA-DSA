#include<iostream>
using namespace std;

template <class T>
struct node
{
    T data;
    struct node * next;
};


template <class T>
class Stack
{
    public:

    struct node<T> * First;
    int iCount;

    Stack();
    void Push(T);
    T Pop();
    int Count();
    void Display();
};

template <class T>
Stack<T>::Stack()
{
    First=NULL;
    iCount=0;
}

template <class T>
void Stack<T>::Push(T iNo)
{
    struct node<T> * newn=NULL;

    newn=new struct node<T>;

    newn->data=iNo;
    newn->next=NULL;

    if(First == NULL)
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
T Stack<T>::Pop()
{
    T iValue;
    struct node<T> * temp=NULL;
    if(First == NULL)
    {
        cout<<"Unable to popped element as stack is empty\n";
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

template <class T>
int Stack<T>::Count()
{
    return iCount;
}

template <class T>
void Stack<T>::Display()
{
    struct node<T> * temp=NULL;
    temp=First;

    while(temp != NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}

int main()
{
    Stack <float>sobj;
    int iRet=0;
    float fRet=0.0f;
    sobj.Push(21.4);
    sobj.Push(11.34);
    sobj.Push(30.23);
    sobj.Push(37.53);
    iRet=sobj.Count();
    cout<<"Number of elements: "<<iRet<<endl;
    sobj.Display();
    fRet=sobj.Pop();
    cout<<"Popped element is "<<fRet<<endl;
    sobj.Display();
    iRet=sobj.Count();
    cout<<"Number of elements: "<<iRet<<endl;
    return 0;
}