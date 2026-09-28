#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node * next;
};

typedef struct node NODE;
typedef struct node * PNODE;

class SinglyLL
{
    private:

    PNODE First;
    int iCount;

    public:

    SinglyLL();
    void InsertFirst(int);
    void InsertLast(int);
    void InsertAtPos(int,int);
    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPos(int);
    void Display();
    int Count();
};

SinglyLL::SinglyLL()
{
    cout<<"Inside constructor\n";
    First=NULL;
    iCount=0;
}

void SinglyLL::InsertFirst(int iNo)
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
void SinglyLL::InsertLast(int iNo)
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
        PNODE temp=First;

        while(temp->next != NULL)
        {
            temp=temp->next;
        }
        temp->next=newn;

    }
    iCount++;
}
void SinglyLL::InsertAtPos(int iNo,int iPos)
{
    PNODE newn=NULL;

    newn=new NODE;

    newn->data=iNo;
    newn->next=NULL;

    int ilength=0;
    ilength=Count();

    if((iPos < 0 )&&(iPos > ilength+1))
    {
        cout<<"Invalid position\n";
    }
    if(iPos == 1)
    {
        InsertFirst(iNo);
    }
    else if(iPos == ilength+1)
    {
        InsertLast(iNo);
    }
    else
    {
        PNODE temp=First;
        int iCnt=0;

        for(iCnt=1;iCnt<iPos-1;iCnt++)
        {
            temp=temp->next;
        }
        newn->next=temp->next;
        temp->next=newn;
        iCount++;
    }
    

}
void SinglyLL::DeleteFirst()
{
    if(First == NULL)
    {
        cout<<"Unable to delete as linkedlist is empty.\n";
        return;
    }
    else if(First->next == NULL)
    {
        delete(First);
        First=NULL;
    }
    else
    {
        PNODE temp=NULL;
        temp=First;
        First=temp->next;
        delete(temp);

    }
    iCount--;
}
void SinglyLL::DeleteLast()
{
    if(First == NULL)
    {
        cout<<"Unable to delete as linkedlist is empty.\n";
        return;
    }
    else if(First->next == NULL)
    {
        delete(First);
        First=NULL;
    }
    else
    {
        PNODE temp1=NULL;
        temp1=First;
        PNODE temp2=NULL;

        while(temp1->next->next != NULL)
        {
            temp1=temp1->next;
        }
        temp2=temp1->next;
        delete(temp2);
        temp1->next=NULL;
    }
    iCount--;
}
void SinglyLL::DeleteAtPos(int iPos)
{
    int ilength=0;
    ilength=Count();

    if((iPos < 0 )&&(iPos > ilength+1))
    {
        cout<<"Invalid position\n";
    }
    if(iPos == 1)
    {
        DeleteFirst();
    }
    else if(iPos == ilength+1)
    {
        DeleteLast();
    }
    else
    {
        PNODE temp1=First;
        PNODE temp2=NULL;
        int iCnt=0;

        for(iCnt=1;iCnt<iPos-1;iCnt++)
        {
            temp1=temp1->next;
        }
        temp2=temp1->next;
        temp1->next=temp2->next;
        delete(temp2);
        iCount--;
    }
}
void SinglyLL::Display()
{
    PNODE temp=First;

    while(temp != NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL\n";
}
int SinglyLL::Count()
{
    return iCount;
}

int main()
{
    SinglyLL obj;
    int iRet=0;
    obj.InsertFirst(25);
    obj.InsertFirst(87);
    obj.Display();
    iRet=obj.Count();
    cout<<"Number of elements are: "<<iRet<<endl;
    obj.Display();
    obj.InsertLast(67);
    obj.Display();
    obj.DeleteFirst();
    obj.Display();
    obj.DeleteLast();
    obj.Display();
    obj.InsertAtPos(100,2);
    obj.Display();
    iRet=obj.Count();
    cout<<"Number of elements are: "<<iRet<<endl;
    obj.DeleteAtPos(2);
    obj.Display();
    iRet=obj.Count();
    cout<<"Number of elements are: "<<iRet<<endl;
    return 0;
}