#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node * next;
};
 
typedef struct node NODE;
typedef struct node * PNODE;

class Queue
{
    public:

    PNODE First;
    int iCount;

    Queue();
    void EnQueue(int iNo);
    int DeQueue();
    void Display();
    int Count();
};

Queue::Queue()
{
    First=NULL;
    iCount=0;
}
void Queue::EnQueue(int iNo)
{
    PNODE newn=NULL;

    newn=new NODE;

    newn->data=iNo;
    newn->next=NULL;

    if(First == NULL)
    {
        First=newn;
    }
    else
    {
        PNODE temp=NULL;
        temp=First;

        while(temp->next != NULL)
        {
            temp=temp->next;
        }
        temp->next=newn;
    }
    iCount++;

}
int Queue::DeQueue()
{
    int iValue=0;

    if(First == NULL)
    {
        cout<<"There is no element to dequeue\n";
        return -1;
    }
    else
    {
        PNODE temp=NULL;
        iValue=First->data;
        temp=First;

        First=temp->next;
        delete temp;
        iCount--;

        return iValue;
    }

}
void Queue::Display()
{

    PNODE temp=NULL;
    temp=First;

    while(temp != NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}
int Queue::Count()
{
    return iCount;
}

int main()
{
    Queue qobj;
    int iRet=0;
    qobj.EnQueue(15);
    qobj.EnQueue(45);
    qobj.EnQueue(1);
    qobj.EnQueue(49);
    qobj.Display();
    iRet=qobj.Count();
    cout<<"Number of elements are: "<<iRet<<endl;
    iRet=qobj.DeQueue();
    cout<<"Dequeue element is :"<<iRet<<endl;
    qobj.Display();
    iRet=qobj.Count();
    cout<<"Number of elements are: "<<iRet<<endl;
    return 0;
}