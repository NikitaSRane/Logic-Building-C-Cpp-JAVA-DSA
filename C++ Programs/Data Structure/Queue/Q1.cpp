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

}
int Queue::DeQueue()
{

}
void Queue::Display()
{

}
int Queue::Count()
{
    return iCount;
}

int main()
{
    return 0;
}