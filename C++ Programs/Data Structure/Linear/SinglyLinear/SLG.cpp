#include<iostream>
using namespace std;

template <class T>
struct node
{
    T data;
    struct node * next;
};

template <class T>
class SinglyLL
{
    private:

    struct node<T> * First;
    int iCount;

    public:

    SinglyLL();
    void InsertFirst(T);
    void InsertLast(T);
    void InsertAtPos(T,int);
    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPos(int);
    void Display();
    int Count();
};

template <class T>
SinglyLL<T>::SinglyLL()
{
    cout<<"Inside constructor\n";
    First=NULL;
    iCount=0;
}

template <class T>
void SinglyLL<T>::InsertFirst(T iNo)
{
    struct node<T> * newn=NULL;
    newn=new struct node<T>;

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

template <class T>
void SinglyLL<T>::InsertLast(T iNo)
{
    struct node<T> * newn=NULL;
    newn=new struct node<T>;

    newn->data=iNo;
    newn->next=NULL;

    if(First == NULL)
    {
        First=newn;
    }
    else
    {
        struct node<T> * temp=First;

        while(temp->next != NULL)
        {
            temp=temp->next;
        }
        temp->next=newn;

    }
    iCount++;
}

template <class T>
void SinglyLL<T>::InsertAtPos(T iNo,int iPos)
{
    struct node<T> * newn=NULL;

    newn=new struct node<T>;

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
        struct node<T> * temp=First;
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
template <class T>
void SinglyLL<T>::DeleteFirst()
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
        struct node<T> * temp=NULL;
        temp=First;
        First=temp->next;
        delete(temp);

    }
    iCount--;
}

template <class T>
void SinglyLL<T>::DeleteLast()
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
        struct node<T> * temp1=NULL;
        temp1=First;
        struct node<T> * temp2=NULL;

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

template <class T>
void SinglyLL<T>::DeleteAtPos(int iPos)
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
        struct node<T> * temp1=First;
        struct node<T> * temp2=NULL;
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

template <class T>
void SinglyLL<T>::Display()
{
    struct node<T> * temp=First;

    while(temp != NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL\n";
}

template <class T>
int SinglyLL<T>::Count()
{
    return iCount;
}

int main()
{
    SinglyLL<char> *obj=new SinglyLL<char>(); // dynamically
    int iRet=0;
    obj->InsertFirst('A');
    obj->InsertFirst('D');
    obj->Display();
    iRet=obj->Count();
    cout<<"Number of elements are: "<<iRet<<endl;
    obj->Display();
    obj->InsertLast('T');
    obj->Display();
    obj->DeleteFirst();
    obj->Display();
    obj->DeleteLast();
    obj->Display();
    obj->InsertAtPos('E',2);
    obj->Display();
    iRet=obj->Count();
    cout<<"Number of elements are: "<<iRet<<endl;
    obj->DeleteAtPos(2);
    obj->Display();
    iRet=obj->Count();
    cout<<"Number of elements are: "<<iRet<<endl;
    return 0;
}