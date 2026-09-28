#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node * next;
};

typedef struct node NODE;
typedef struct node * PNODE;

class Stack
{
    public:

    PNODE First;
    int iCount;

    Stack();
    void Push(int);
    int Pop();
    int Count();
    void Display();
};

Stack::Stack()
{
    First=NULL;
    iCount=0;
}
void Stack::Push(int iNo)
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
        newn->next=First;
        First=newn;
    }
    iCount++;
}
int Stack::Pop()
{
    int iValue=0;
    PNODE temp=NULL;
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
int Stack::Count()
{
    return iCount;
}
void Stack::Display()
{
    PNODE temp=NULL;
    temp=First;

    while(temp != NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}

int main()
{
    Stack sobj;
    int iRet=0;
    sobj.Push(21);
    sobj.Push(11);
    sobj.Push(30);
    sobj.Push(37);
    iRet=sobj.Count();
    cout<<"Number of elements: "<<iRet<<endl;
    sobj.Display();
    iRet=sobj.Pop();
    cout<<"Popped element is "<<iRet<<endl;
    sobj.Display();
    iRet=sobj.Count();
    cout<<"Number of elements: "<<iRet<<endl;
    return 0;
}