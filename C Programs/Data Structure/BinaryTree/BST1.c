#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node * lchild;
    struct node * rchild;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;


void Insert(PPNODE Root,int iNo)
{
    PNODE newn=NULL;
    newn=(PNODE)malloc(sizeof(NODE));

    newn->data=iNo;
    newn->lchild=NULL;
    newn->rchild=NULL;

    if(*Root == NULL) // Tree is empty
    {
        *Root=newn;
    }
    else
    {
        PNODE temp=NULL;
        temp=*Root;

        while(1) // unconditional loop
        {
            if(iNo == temp->data)
            {
                printf("Unable to insert element as duplicate element.");
                free(newn);
                break;
            }
            else if(iNo > temp->data)
            {
                if(temp->rchild == NULL)
                {
                    temp->rchild=newn;
                    break;
                }
                else
                {
                    temp=temp->rchild;
                }
            }
            else if(iNo < temp->data)
            {
                if(temp->lchild == NULL)
                {
                    temp->lchild = newn;
                    break;
                }
                else
                {
                    temp=temp->lchild;
                }
            }
        }
    }
}

int main()
{
    PNODE Head=NULL;
    Insert(&Head,21);
    Insert(&Head,11);
    Insert(&Head,51);

    return 0;
}