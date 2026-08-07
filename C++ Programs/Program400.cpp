#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};


typedef struct node NODE;
typedef struct node * PNODE;

class Queue
{
    private:
        PNODE First;
        int iCount;

    public:
        Queue();
        void Display();
        int Count();

        void EnQueue(int No); //void InsertLast(int No);
        int DeQueue(); // void DeleteFirst();

};

Queue::Queue()
{
    First=NULL;
    iCount=0;
}
void Queue::Display()
{
    cout<<"Elements of stack are: \n";

    PNODE temp=NULL;
    temp=First;

    while(temp !=NULL)
    {
        cout<<temp->data<<"\n";
        temp=temp->next;
    }
    cout<<endl;
}
int Queue::Count()
{
    return iCount;
}

void Queue::EnQueue(int No)
{
    PNODE newn=NULL;
    PNODE temp=NULL;

    newn=new NODE;

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
int Queue::DeQueue()
{
    int iValue=0;
    PNODE temp=NULL;

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
    Queue obj;
    int iChoice=0;
    int iNo=0;

    cout<<"-----------------Implementation of queue--------------"<<endl;

    while(iChoice != 5)
    {

        cout<<"Please select your choice: "<<endl;
        cout<<"1: Insert new element in Queue"<<endl;
        cout<<"2: Remove the element from Queue"<<endl;
        cout<<"3: Display the elements from Queue"<<endl;
        cout<<"4: Count number of elements in Queue"<<endl;
        cout<<"5: Exit"<<endl;

        cin>>iChoice;

        switch(iChoice)
        {
            case 1:
                cout<<"Enter the element that you want to insert: "<<endl;
                cin>>iNo;
                obj.EnQueue(iNo);
            break;

            case 2:
                iNo=obj.DeQueue();
                if(iNo != -1)
                {
                    cout<<"Removed element from queue is :"<<iNo<<endl;
                }
            break;

            case 3:
                obj.Display();
            break;

            case 4:
                iNo=obj.Count();
                cout<<"Number of elements are: "<<iNo<<endl;
            break;

            case 5:
                cout<<"Thank you for using our application"<<endl;
            break;

        }


    }
    return 0;
}