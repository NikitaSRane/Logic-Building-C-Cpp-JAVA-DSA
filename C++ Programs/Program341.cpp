#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
//typedef struct node ** PPNODE;

class SinglyLL
{
    public:

        PNODE First;// for 
        int iCount; // for count node

        SinglyLL();
};

SinglyLL::SinglyLL()
{
    cout<<"Inside constructor."<<endl;
    First=NULL;
    iCount=0;
}

int main()
{
    SinglyLL obj;

    return 0;
}