// Generic Queue

#include<iostream>
using namespace std;

template <class T>
struct nodeQ
{
    T data;
    struct nodeQ *next;
};

template <class T>
class Queue
{
    private:
        struct nodeQ<T> * First;
        int iCount;

    public:
        Queue();
        void Display();
        int Count();

        void EnQueue(T No); //void InsertLast(int No);
        int DeQueue(); // void DeleteFirst();

};


template <class T>
Queue<T>::Queue()
{
    First=NULL;
    iCount=0;
}

template <class T>
void Queue<T>::Display()
{
    cout<<"Elements of stack are: \n";

    struct nodeQ<T> * temp=NULL;
    temp=First;

    while(temp !=NULL)
    {
        cout<<temp->data<<"\n";
        temp=temp->next;
    }
    cout<<endl;
}

template <class T>
int Queue<T>::Count()
{
    return iCount;
}

template <class T>
void Queue<T>::EnQueue(T No)
{
    struct nodeQ<T> * newn=NULL;
    struct nodeQ<T> * temp=NULL;

    newn=new struct nodeQ<T>;

    newn->data=No;
    newn->next=NULL;

    if(First==NULL)
    {
        First=newn;
    }
    else
    {   
        temp=First;

        while(temp->next != NULL)
        {
            temp=temp->next;
        }
        temp->next=newn;

    }
    iCount++;
}

template <class T>
int Queue<T>::DeQueue()
{
    int iValue=0;
    struct nodeQ<T> * temp=NULL;

    if(First==NULL)
    {
        cout<<"Unable to remove the elements as queue is empty."<<endl;
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
    cout<<"-------------  Queue for Integer-----------------"<<endl;
    Queue<int> *iobjq=new Queue<int>();
    int iRet=0;

    iobjq->EnQueue(10);
    iobjq->EnQueue(20);
    iobjq->EnQueue(30);
    iobjq->EnQueue(40);

    iobjq->Display();

    iRet=iobjq->Count();
    cout<<"Number of elements: "<<iRet<<endl;

    iRet=iobjq->DeQueue();
    cout<<"Removed element is: "<<iRet<<endl;;
    iobjq->Display();

    iRet=iobjq->Count();
    cout<<"Number of elements: "<<iRet<<endl;

    iobjq->EnQueue(50);

    iobjq->Display();

    iRet=iobjq->Count();
    cout<<"Number of elements: "<<iRet<<endl;

    cout<<"-------------  Queue for Character-----------------"<<endl;
    Queue<char> *cobjq=new Queue<char>();

    cobjq->EnQueue('s');
    cobjq->EnQueue('m');
    cobjq->EnQueue('k');
    cobjq->EnQueue('r');

    cobjq->Display();

    iRet=cobjq->Count();
    cout<<"Number of elements: "<<iRet<<endl;

    iRet=cobjq->DeQueue();
    cout<<"Removed element is: "<<iRet<<endl;;
    iobjq->Display();

    iRet=cobjq->Count();
    cout<<"Number of elements: "<<iRet<<endl;

    cobjq->EnQueue('z');

    cobjq->Display();

    iRet=cobjq->Count();
    cout<<"Number of elements: "<<iRet<<endl;

    
    cout<<"-------------  Queue for Float-----------------"<<endl;
    Queue<float> *fobjq=new Queue<float>();

    fobjq->EnQueue(10.20f);
    fobjq->EnQueue(20.45f);
    fobjq->EnQueue(30.0f);
    fobjq->EnQueue(40.52f);

    fobjq->Display();

    iRet=fobjq->Count();
    cout<<"Number of elements: "<<iRet<<endl;

    iRet=fobjq->DeQueue();
    cout<<"Removed element is: "<<iRet<<endl;;
    fobjq->Display();

    iRet=fobjq->Count();
    cout<<"Number of elements: "<<iRet<<endl;

    fobjq->EnQueue(1.45f);

    fobjq->Display();

    iRet=fobjq->Count();
    cout<<"Number of elements: "<<iRet<<endl;


    cout<<"-------------  Queue for Double-----------------"<<endl;
    Queue<double> *dobjq=new Queue<double>();

    dobjq->EnQueue(10.20);
    dobjq->EnQueue(20.45);
    dobjq->EnQueue(30.0);
    dobjq->EnQueue(40.52);

    dobjq->Display();

    iRet=dobjq->Count();
    cout<<"Number of elements: "<<iRet<<endl;

    iRet=dobjq->DeQueue();
    cout<<"Removed element is: "<<iRet<<endl;;
    dobjq->Display();

    iRet=dobjq->Count();
    cout<<"Number of elements: "<<iRet<<endl;

    dobjq->EnQueue(1.45);

    dobjq->Display();

    iRet=dobjq->Count();
    cout<<"Number of elements: "<<iRet<<endl;

    return 0;
}