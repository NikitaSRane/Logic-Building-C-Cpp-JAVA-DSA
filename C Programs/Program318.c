#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;  
typedef struct node * PNODE;
typedef struct node ** PPNODE;

int main()
{
    //struct node *Head=NULL;
    PNODE Head=NULL;

    //struct node obj1;
    NODE obj1;

    return 0;
}