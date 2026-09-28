#include<iostream>
using namespace std;

template <class T>
struct node
{
    T data;
    struct node * next;
};

template <class T>
class Queue
{
    public:

    struct node<T> * First;
    int iCount;

    Queue();
    void EnQueue(T iNo);
    T DeQueue();
    void Display();
    int Count();
};

template <class T>
Queue<T>::Queue()
{
    First=NULL;
    iCount=0;
}

template <class T>
void Queue<T>::EnQueue(T iNo)
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
        struct node<T> * temp=NULL;
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
T Queue<T>::DeQueue()
{
    T iValue=0;

    if(First == NULL)
    {
        cout<<"There is no element to dequeue\n";
        return -1;
    }
    else
    {
        struct node<T> * temp=NULL;
        iValue=First->data;
        temp=First;

        First=temp->next;
        delete temp;
        iCount--;

        return iValue;
    }

}

template <class T>
void Queue<T>::Display()
{

    struct node<T> * temp=NULL;
    temp=First;

    while(temp != NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}

template <class T>
int Queue<T>::Count()
{
    return iCount;
}

int main()
{
    int iChoice=0;
    char iNo='\0';
    char iRet='\0';
    Queue <char>qobj;

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