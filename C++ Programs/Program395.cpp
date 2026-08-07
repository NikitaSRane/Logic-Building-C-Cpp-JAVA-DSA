#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};


typedef struct node NODE;
typedef struct node * PNODE;

class Stack
{
    private:
        PNODE First;
        int iCount;

    public:
        Stack();
        void Display();
        int Count();

        void Push(int No); //void InsertFirst(int No);
        int Pop(); // void DeleteFirst();

};

Stack::Stack()
{
    First=NULL;
    iCount=0;
}
void Stack::Display()
{

}
int Stack::Count()
{
    return iCount;
}

void Stack::Push(int No)
{

}
int Stack::Pop()
{
    return 0;
} 

int main()
{
    Stack obj;
    int iRet=0;

    iRet=obj.Count();
    cout<<"Number of elements:"<<iRet<<endl;

    return 0;
}