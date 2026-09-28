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

}
int Stack::Count()
{
    return iCount;
}
void Stack::Display()
{

}

int main()
{
    Stack sobj;
    int iRet=0;
    sobj.Push(21);
    sobj.Push(11);
    iRet=sobj.Count();
    cout<<"Number of elements: "<<iRet<<endl;
    return 0;
}