#include<iostream>
using namespace std;

template <class T>
struct node
{
    T data;
    struct node * prev;
    struct node * next;
};

template <class T>
class DoublyLL
{
    public:

    struct node<T> * First;
    int iCount;

    DoublyLL();
    void Display();
    int Count();
    void InsertFirst(T);
    void InsertLast(T);
    void InsertAtPos(T,int);
    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPos(int);

};

template <class T>
DoublyLL<T>::DoublyLL()
{
    First=NULL;
    iCount=0;
}

template <class T>
void DoublyLL<T>::Display()
{
    struct node<T> * temp=First;
    cout<<"NULL<=>";
    while(temp != NULL)
    {
        cout<<temp->data<<"<=>";
        temp=temp->next;
    }
    cout<<"NULL\n";
}

template <class T>
int DoublyLL<T>::Count()
{
    return iCount;
}

template <class T>
void DoublyLL<T>::InsertFirst(T iNo)
{
    struct node<T>* newn=NULL;

    newn=new struct node<T>;

    newn->data=iNo;
    newn->next=NULL;
    newn->prev=NULL;

    if(First == NULL)
    {
        First=newn;
    }
    else
    {
        newn->next=First;
        First->prev=newn;
        First=newn;
    }
    iCount++;
}

template <class T>
void DoublyLL<T>::InsertLast(T iNo)
{
    struct node<T>* newn=NULL;

    newn=new struct node<T>;

    newn->data=iNo;
    newn->next=NULL;
    newn->prev=NULL;

    if(First == NULL)
    {
        First=newn;
    }
    else
    {
        struct node<T>* temp=First;

        while(temp->next != NULL)
        {
            temp=temp->next;
        }
        temp->next=newn;
        newn->prev=temp;
    }
    iCount++;
}

template <class T>
void DoublyLL<T>::InsertAtPos(T iNo,int iPos)
{
    int ilength=Count();
    struct node<T>* newn=NULL;

    newn=new struct node<T>;
    newn->data=iNo;
    newn->prev=NULL;
    newn->next=NULL;


    if((iPos < 0) || (iPos > ilength+1))
    {
        cout<<"Invalid position\n";
        return;
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
        int iCnt=0;
        struct node<T>* temp=First;

        for(iCnt=1;iCnt<iPos-1;iCnt++)
        {
            temp=temp->next;
        }

        newn->next=temp->next;
        newn->prev=temp->next;
        temp->next=newn;
        temp->next->prev=newn;

        iCount++;
    }
}

template <class T>
void DoublyLL<T>::DeleteFirst()
{
    if(First == NULL)
    {
        cout<<"Unable to delete as linkelist is empty\n";
    }
    else if((First->next == NULL)&&(First->prev == NULL))
    {
        delete(First);
        First=NULL;
    }
    else
    {
        struct node<T>* temp=First;

        First=temp->next;
        temp->next=NULL;
        First->prev=NULL;
        delete(temp);
    }
    iCount--;
}

template <class T>
void DoublyLL<T>::DeleteLast()
{
    if(First == NULL)
    {
        cout<<"Unable to delete as linkelist is empty\n";
    }
    else if((First->next == NULL)&&(First->prev == NULL))
    {
        delete(First);
        First=NULL;
    }
    else
    {
        struct node<T>* temp=First;
        struct node<T>* temp2=NULL;

        while(temp->next->next != NULL)
        {
            temp=temp->next;
        }
        temp2=temp->next;

        temp->next=NULL;
        temp2->prev=NULL;
        delete(temp2);
    }
    iCount--;
}

template <class T>
void DoublyLL<T>::DeleteAtPos(int iPos)
{
    int ilength=Count();

    if((iPos < 0) || (iPos > ilength+1))
    {
        cout<<"Invalid position\n";
        return;
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
        int iCnt=0;
        struct node<T>* temp=First;
        struct node<T>* temp2=NULL;

        for(iCnt=1;iCnt<iPos-1;iCnt++)
        {
            temp=temp->next;
        }
        temp2=temp->next;
        temp->next=temp->next->next;
        temp->next->prev=temp;
        delete(temp2);

        iCount--;
    }
}

int main()
{
    DoublyLL<float> obj;
    int iRet=0;
    obj.InsertFirst(20.45);
    obj.InsertFirst(30.34);
    obj.InsertFirst(23.3);
    obj.Display();
    iRet=obj.Count();
    cout<<"Number of elements are: "<<iRet<<endl;
    obj.InsertLast(40.64);
    obj.InsertLast(60.34);
    obj.Display();
    iRet=obj.Count();
    cout<<"Number of elements are: "<<iRet<<endl;
    obj.DeleteFirst();
    obj.Display();
    iRet=obj.Count();
    cout<<"Number of elements are: "<<iRet<<endl;
    obj.DeleteLast();
    obj.Display();
    iRet=obj.Count();
    cout<<"Number of elements are: "<<iRet<<endl;
    obj.InsertAtPos(80.6,2);
    obj.Display();
    iRet=obj.Count();
    cout<<"Number of elements are: "<<iRet<<endl;
    obj.DeleteAtPos(2);
    obj.Display();
    iRet=obj.Count();
    cout<<"Number of elements are: "<<iRet<<endl;
    return 0;
}