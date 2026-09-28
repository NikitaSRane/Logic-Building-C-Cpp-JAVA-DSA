#include<stdio.h>
#include<stdlib.h> // dynamic memory allocation

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
    struct node *Head=NULL;

    struct node obj1;

    return 0;

}