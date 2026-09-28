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
    int iChoice=0;
    int iNo=0;
    int iRet=0;
    Queue qobj;

    while(iChoice != 5)
    {
        cout<<"Please select your choice: "<<endl;
        cout<<"1: Insert new element in queue"<<endl;
        cout<<"2: Remove element from queue"<<endl;
        cout<<"3: Display elements from queue"<<endl;
        cout<<"4: Count number of elements from queue"<<endl;
        cout<<"5: Exit"<<endl;
    
        cin>>iChoice;

        switch(iChoice)
        {
            case 1:
                cout<<"Enter the element that you want to insert: "<<endl;
                cin>>iNo;
                qobj.EnQueue(iNo);
            break;

            case 2:
                iRet=qobj.DeQueue();
                if(iRet != -1)
                {
                    cout<<"Removed elements from queue is :"<<iRet<<endl;
                }
            break;

            case 3:
                qobj.Display();
            break;

            case 4:
                iRet=qobj.Count();
                cout<<"Number of elements are: "<<iRet<<endl;
            break;

            case 5:
                cout<<"Thank you for using our application"<<endl;
            break;

        }
    }


}