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
    qobj.Display();
    iRet=qobj.Count();
    cout<<"Number of elements are: "<<iRet<<endl;
    return 0;
}