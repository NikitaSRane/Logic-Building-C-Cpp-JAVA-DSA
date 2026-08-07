#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node * next;
    struct node * prev;
};

typedef struct node NODE;
typedef struct node * PNODE;

class DoublyLL
{
    public:
        PNODE First;
        int iCount;

        DoublyLL()
        {
            cout<<"Inside constructor.\n";
            First=NULL;
            iCount=0;
        }
};

int main()
{
    DoublyLL obj;

    return 0;
}