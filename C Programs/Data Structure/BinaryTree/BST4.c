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

    if(*Root == NULL)
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

void InOrder(PNODE Root) // Inorder 
{
    if(Root != NULL)
    {
        InOrder(Root->lchild);
        printf("%d\t",Root->data);
        InOrder(Root->rchild);

    }
}

void PreOrder(PNODE Root) // Inorder 
{
    if(Root != NULL)
    {
        printf("%d\t",Root->data);
        PreOrder(Root->lchild);
        PreOrder(Root->rchild);

    }
}


void PostOrder(PNODE Root) // Inorder 
{
    if(Root != NULL)
    {
        PostOrder(Root->lchild);
        PostOrder(Root->rchild);
        printf("%d\t",Root->data);

    }
}

int main()
{
    PNODE Head=NULL;
    Insert(&Head,21);
    Insert(&Head,34);
    Insert(&Head,11);
    Insert(&Head,98);
    Insert(&Head,44);
    Insert(&Head,28);
    Insert(&Head,11);
    Insert(&Head,7);
    Insert(&Head,17);
    PostOrder(Head);


    return 0;
}