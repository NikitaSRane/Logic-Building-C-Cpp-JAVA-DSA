#include<iostream>
using namespace std;

////////////////////////////////////////////////////////////
//
// Code of Singly Linear Linked List
//
//////////////////////////////////////////////////////////

template <class T>
struct nodeSLL
{
    T data;
    struct nodeSLL *next;
};  


template <class T>
class SinglyLL
{
    public:
        struct nodeSLL<T> * First;// it contains address of first node
        int iCount; // for counting node elements

        SinglyLL();// constructor declaration

        void Display();
        int Count();

        void InsertFirst(T No);
        void InsertLast(T No);
        void InsertAtPos(T No, int iPos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);
};

template <class T>
SinglyLL<T>::SinglyLL() // constructor definition
{
    cout<<"Inside constructor."<<endl;
    First=NULL;
    iCount=0;
}

template <class T>
void SinglyLL<T>::Display()
{   
    struct nodeSLL<T> * temp=First;
    while(temp != NULL)
    {
        cout<<"|"<<temp->data<<"|->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

template <class T>
int SinglyLL<T>::Count()
{
    return iCount;
}

template <class T>
void SinglyLL<T>::InsertFirst(T No)
{
    struct nodeSLL<T> * newn=NULL;

    newn=new struct nodeSLL<T>;

    newn->data=No;
    newn->next=NULL;

    if(First == NULL) // if(iCount == 0){}
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
void SinglyLL<T>::InsertLast(T No)
{
    struct nodeSLL<T> * newn=NULL;
    struct nodeSLL<T> *  temp=NULL;

    newn=new struct nodeSLL<T>;

    newn->data=No;
    newn->next=NULL;

    if(First == NULL) // if(iCount == 0){}
    {
        First=newn;
    }
    else
    {
        temp=First;

        while(temp->next !=NULL)
        {
            temp=temp->next;
        }
        temp->next=newn;
    }
    iCount++;
}

template <class T>
void SinglyLL<T>::InsertAtPos(T No, int iPos)
{
    struct nodeSLL<T> *newn=NULL;
    struct nodeSLL<T> *temp=NULL;
    int i=0;

    if((iPos<1)||(iPos >iCount+1))
    {
        cout<<"Invalid position"<<endl;
        return;
    }
    if(iPos ==1 )
    {
        InsertFirst(No);
    }
    else if(iPos==iCount+1)
    {
        InsertLast(No);
    }
    else
    {
        temp=First;
        newn=new struct nodeSLL<T>;

        newn->data=No;
        newn->next=NULL;

        for(i=1;i<iPos-1;i++)
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
    struct nodeSLL<T> *temp=First;

    if(First==NULL)
    {
        cout<<"LL is empty.\n";
        return;
    }
    else if(First->next == NULL)
    {
        delete First;
        First=NULL;
    }
    else
    {
        First=First->next;
        delete temp;
    }
    iCount--;
}

template <class T>
void SinglyLL<T>::DeleteLast()
{
    struct nodeSLL<T> *temp=NULL;

    if(First == NULL) // if(iCount == 0){}
    {
        return;
    }
    else if(First->next == NULL)
    {
        delete First;
        First=NULL;
    }
    else
    {
        temp=First;

        while(temp->next->next !=NULL)
        {
            temp=temp->next;
        }
        delete(temp->next); 
        temp->next=NULL; 
    }
    iCount--;
}

template <class T>
void SinglyLL<T>::DeleteAtPos(int iPos)
{
    struct nodeSLL<T> * temp1=NULL;
    struct nodeSLL<T> * temp2=NULL;
    int i=0;

    if((iPos<1)||(iPos >iCount))
    {
        cout<<"Invalid position"<<endl;
        return;
    }
    if(iPos ==1 )
    {
        DeleteFirst();
    }
    else if(iPos=iCount)
    {
        DeleteLast();
    }
    else
    {
        temp1=First;

        for(i=1;i<iPos-1;i++)
        {
            temp1=temp1->next;
        }
        temp2=temp1->next;

        temp1->next=temp2->next;
        delete temp2;

        iCount--;
    }   
}

////////////////////////////////////////////////////////////
//
// Code of Singly Cirular Linked List
//
//////////////////////////////////////////////////////////
template <class T>
struct nodeSCL
{
    T data;
    struct nodeSCL * next;
};

template <class T>
class SinglyCL
{
    private:
    
        struct nodeSCL<T> * First;
        struct nodeSCL<T> * Last;
        int iCount;

    public:
    SinglyCL();

    void Display();
    int Count();
    void InsertFirst(T No);
    void InsertLast(T No);
    void InsertAtPos(T No,int iPos);

    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPos(int iPos);
};

template <class T>
SinglyCL<T>::SinglyCL()
{
    First=NULL;
    Last=NULL;
    iCount=0;
}

template <class T>
void SinglyCL<T>::Display()
{

    if((First==NULL)&&(Last==NULL))
    {
        return;
    }
    do
    {
        cout<<"|"<<First->data<<"|->";
        First=First->next;
    }
    while(First !=Last->next);
    cout<<endl;

}

template <class T>
int SinglyCL<T>::Count()
{
    return iCount;
}

template <class T>
void SinglyCL<T>::InsertFirst(T No)
{
    struct nodeSCL<T> * newn=NULL;

    newn=new struct nodeSCL<T>;

    newn->data=No;
    newn->next=NULL;

    if((First==NULL)&&(Last==NULL))
    {
        First=newn;
        Last=newn;
    }
    else
    {
        newn->next=First;
        First=newn;     
    }
    Last->next=First;
    iCount++;
    
}

template <class T>
void SinglyCL<T>::InsertLast(T No)
{
    struct nodeSCL<T> * newn=NULL;

    newn=new struct nodeSCL<T>;

    newn->data=No;
    newn->next=NULL;

    if((First==NULL)&&(Last==NULL))
    {
        First=newn;
        Last=newn;
    }
    else
    {
        Last->next=newn;
        Last=newn;
    }
    Last->next=First;
    iCount++;
    
}

template <class T>
void SinglyCL<T>::InsertAtPos(T No,int iPos)
{
    if((iPos < 1)||(iPos >iCount+1))
    {
        return;
    }
    if(iPos == 1)
    {
        InsertFirst(No);
    }
    else if(iPos == iCount+1)
    {
        InsertLast(No);
    }
    else
    {
        struct nodeSCL<T> * newn=NULL;
        struct nodeSCL<T> * temp=NULL;
        int i=0;

        newn=new struct nodeSCL<T>;

        newn->data=No;
        newn->next=NULL;

        temp=First;

        for(i=1;i<iPos-1;i++)
        {
            temp=temp->next;
        }

        newn->next=temp->next;
        temp->next=newn;
        iCount++;
    }
}

template <class T>
void SinglyCL<T>::DeleteFirst()
{
    if((First==NULL)&&(Last==NULL))
    {
        return;
    }
    else if(First==Last)
    {
        delete First;
        First=NULL;
        Last=NULL;
    }
    else
    {
        First=First->next;
        delete Last->next;
        Last-> next=First;
    }
    iCount--;
}

template <class T>
void SinglyCL<T>::DeleteLast()
{
    
    if((First==NULL)&&(Last==NULL))
    {
        return;
    }
    else if(First==Last)
    {
        delete First;
        First=NULL;
        Last=NULL;
    }
    else
    {
        struct nodeSCL<T> * temp=NULL;

        temp=First;

        while(temp->next != Last)
        {
            temp=temp->next;
        }
        temp->next=First;
        delete Last;
        Last=temp;
    }
    iCount--;
    
}

template <class T>
void SinglyCL<T>::DeleteAtPos(int iPos)
{
    if((iPos < 1)||(iPos >iCount))
    {
        return;
    }
    if(iPos == 1)
    {
        DeleteFirst();
    }
    else if(iPos == iCount)
    {
        DeleteLast();
    }
    else
    {
        struct nodeSCL<T> * temp1=NULL;
        struct nodeSCL<T> * temp2=NULL;
        int i=0;

        temp1=First;

        for(i=1;i<iPos-1;i++)
        {
            temp1=temp1->next;
        }
        temp2=temp1->next;
        temp1->next=temp2->next;
        delete temp2;

        iCount--;
    }
}


////////////////////////////////////////////////////////////
//
// Code of Doubly Linear Linked List
//
//////////////////////////////////////////////////////////
template <class T>
struct nodeDLL
{
    T data;
    struct nodeDLL * next;
    struct nodeDLL * prev;
};

template <class T>
class DoublyLL
{
    private:
        struct nodeDLL<T> * First;
        int iCount;
    public:
        DoublyLL();

        void Display();
        int Count();

        void InsertFirst(T No);
        void InsertLast(T No);
        void InsertAtPos(T No, int iPos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);
};

template <class T>
DoublyLL<T>::DoublyLL()
{
    cout<<"Inside constructor.\n";
    First=NULL;
    iCount=0;
}

template <class T>
void DoublyLL<T>::Display()
{
    struct nodeDLL<T> * temp=NULL;

    temp=First;

    cout<<"NULL|<=>";
    while(temp != NULL)
    {
        cout<<temp->data<<"|<=>|";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

template <class T>
int DoublyLL<T>::Count()
{
    return iCount;
}

template <class T>
void DoublyLL<T>::InsertFirst(T No)
{
    struct nodeDLL<T> * newn=NULL;

    newn=new struct nodeDLL<T>;

    newn->data=No;
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
void DoublyLL<T>::InsertLast(T No)
{
    struct nodeDLL<T> * newn=NULL;

    newn=new struct nodeDLL<T>;

    newn->data=No;
    newn->next=NULL;
    newn->prev=NULL;

    if(First == NULL)
    {
        First=newn;
    }
    else
    {   
        struct nodeDLL<T> * temp=NULL;

        temp=First;

        while(temp->next != NULL)
        {
            temp=temp->next;
        }
        temp->next=newn;
        newn->prev=temp; // temp->next->prev=temp;
    }
    iCount++;
}

template <class T>
void DoublyLL<T>::InsertAtPos(T No, int iPos)
{
    if((iPos < 1)||(iPos >iCount+1))
    {
        cout<<"Invalid position."<<endl;
        return;
    }
    if(iPos == 1)
    {
        InsertFirst(No);
    }
    else if(iPos == iCount+1)
    {
        InsertLast(No);
    }
    else
    {
        struct nodeDLL<T> * newn=NULL;
        struct nodeDLL<T> * temp=NULL;
        int i=0;

        newn=new struct nodeDLL<T>;

        newn->data=No;
        newn->next=NULL;
        newn->prev=NULL;

        temp=First;

        for(i=1;i<iPos-1;i++)
        {
            temp=temp->next;
        }
        newn->next=temp->next;
        newn->next->prev=newn;
        newn->prev=temp;
        temp->next=newn;


    }
    iCount++;
}

template <class T>
void DoublyLL<T>::DeleteFirst()
{
    if(First == NULL)// if(iCount == 0){}
    {
        return;
    }
    if(First->next == NULL)// if(iCount == 1){}
    {
        delete First;
        First=NULL;
    }
    else
    {
        First=First->next;
        delete First->prev;
        First->prev=NULL;
    }
    iCount--;
}

template <class T>
void DoublyLL<T>::DeleteLast()
{
    if(First == NULL)// if(iCount == 0){}   
    {
        return;
    }
    if(First->next == NULL)// if(iCount == 1){}
    {
        delete First;
        First=NULL;
    }
    else
    {
        struct nodeDLL<T> * temp=First;

        while(temp->next->next != NULL)
        {
            temp=temp->next;
        }
        delete temp->next;
        temp->next=NULL;
    }
    iCount--;
}

template <class T>
void DoublyLL<T>::DeleteAtPos(int iPos)
{
    if((iPos < 1)||(iPos >iCount))
    {
        cout<<"Invalid position."<<endl;
        return;
    }
    if(iPos == 1)
    {
        DeleteFirst();
    }
    else if(iPos == iCount)
    {
        DeleteLast();
    }
    else
    {
        struct nodeDLL<T> * temp1=NULL;
        struct nodeDLL<T> * temp2=NULL;

        int i=0;

        temp1=First;

        for(i=1;i<iPos-1;i++)
        {
            temp1=temp1->next;
        }
        temp2=temp1->next;

        temp1->next=temp2->next;
        temp2->next=temp1;
        delete temp2;

        iCount--;
    }
}


////////////////////////////////////////////////////////////
//
// Code of Doubly Circular Linked List
//
//////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

template <class T>
struct nodeDCL
{
    T data;
    struct nodeDCL *next;
    struct nodeDCL *prev;
};

template <class T>
class DoublyCL
{
    private:
        struct nodeDCL<T> * First;
        struct nodeDCL<T> *  Last;
        int iCount;

    public:
        DoublyCL();

        void Display();
        int Count();

        void InsertFirst(T No);
        void InsertLast(T No);
        void InsertAtPos(T No,int iPos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);

};

template <class T>
DoublyCL<T>::DoublyCL()
{
    First=NULL;
    Last=NULL;
    iCount=0;
}

template <class T>
void DoublyCL<T>::Display()
{
    if((First == NULL)&&(Last == NULL))
    {
        cout<<"Linkedlist id empty."<<endl;
        return;
    }
    cout<<"<=";
    do
    {
        cout<<"|"<<First->data<<"|<=>";
        First=First->next;
    }
    while(Last->next != First);

    cout<<endl;
}

template <class T>
int DoublyCL<T>::Count()
{
    return iCount;
}

template <class T>
void DoublyCL<T>::InsertFirst(T No)
{
    struct nodeDCL<T> *newn=NULL;

    newn=new struct nodeDCL<T>;

    newn->data=No;
    newn->next=NULL;
    newn->prev=NULL;

    if((First == NULL)&&(Last == NULL))
    {
        First=newn;
        Last=newn;   
    }
    else
    {
        newn->next=First;
        First->prev=newn;
        First=newn;
    }
    Last->next=First;
    First->prev=Last;

    iCount++;
}

template <class T>
void DoublyCL<T>::InsertLast(T No)
{
    struct nodeDCL<T> *newn=NULL;

    newn=new struct nodeDCL<T>;

    newn->data=No;
    newn->next=NULL;
    newn->prev=NULL;

    if((First == NULL)&&(Last == NULL))
    {
        First=newn;
        Last=newn;   
    }
    else
    {
        Last->next=newn;
        newn->prev=Last;
        Last=newn;
    }
    Last->next=First;
    First->prev=Last;

    iCount++;
}

template <class T>
void DoublyCL<T>::InsertAtPos(T No,int iPos)
{
    if((iPos<1)||(iPos>iCount+1))
    {
        cout<<"Invalid position.\n";
        return;
    }
    if(iPos==1)
    {
        InsertFirst(No);
    }
    else if(iPos==iCount+1)
    {
        InsertLast(No);
    }
    else
    {
        struct nodeDCL<T> *newn=NULL;
        struct nodeDCL<T> *temp=NULL;
        int i=0;


        newn=new struct nodeDCL<T>;

        newn->data=No;
        newn->next=NULL;
        newn->prev=NULL;

        temp=First;

        for(i=1;i<iPos-1;i++)
        {
            temp=temp->next;
        }

        newn->next=temp->next;
        temp->next->prev=newn;

        newn->prev=temp;
        temp->next=newn;

        iCount++;
    }
}

template <class T>
void DoublyCL<T>::DeleteFirst()
{
    if(First ==NULL && Last==NULL)
    {
        return;
    }
    else if(First==Last)
    {
        delete First;
        First=NULL;
        Last=NULL;
    }
    else
    {
        First=First->next;
        delete Last->next;
        First->prev=Last;
        Last->next=First;
    }
    iCount--;
}

template <class T>
void DoublyCL<T>::DeleteLast()
{
    if(First ==NULL && Last==NULL)
    {
        return;
    }
    else if(First==Last)
    {
        delete First;
        First=NULL;
        Last=NULL;
    }
    else
    {
        Last=Last->prev;
        delete First->prev;
        Last->next=First;
        First->prev=Last;
    }
    iCount--;
}

template <class T>
void DoublyCL<T>::DeleteAtPos(int iPos)
{
     if((iPos<1)||(iPos>iCount))
    {
        cout<<"Invalid position.\n";
        return;
    }
    if(iPos==1)
    {
        DeleteFirst();
    }
    else if(iPos==iCount)
    {
        DeleteLast();
    }
    else
    {
        struct nodeDCL<T> *temp=NULL;
        int i=0;

        temp=First;

        for(i=1;i<iPos-1;i++)
        {
            temp=temp->next;
        }
        temp->next=temp->next->next;
        delete temp->next->prev;
        temp->next->prev=temp;
        
        iCount--;
    }
}

////////////////////////////////////////////////////////////
//
// Code of Stack
//
//////////////////////////////////////////////////////////

template <class T>
struct nodeS
{
    T data;
    struct nodeS *next;
};

template <class T>
class Stack
{
    private:
        struct nodeS<T> * First;
        int iCount;

    public:
        Stack();
        void Display();
        int Count();

        void Push(T No); //void InsertFirst(int No);
        int Pop(); // void DeleteFirst();

};

template <class T>
Stack<T>::Stack()
{
    First=NULL;
    iCount=0;
}

template <class T>
void Stack<T>::Display()
{
    cout<<"Elements of stack are: \n";

    struct nodeS<T> * temp=NULL;
    temp=First;

    while(temp !=NULL)
    {
        cout<<temp->data<<"\n";
        temp=temp->next;
    }
    cout<<endl;
}

template <class T>
int Stack<T>::Count()
{
    return iCount;
}


template <class T>
void Stack<T>::Push(T No)
{
    struct nodeS<T> * newn=NULL;

    newn=new struct nodeS<T>;

    newn->data=No;
    newn->next=NULL;

    if(First==NULL)
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
int Stack<T>::Pop()
{
    int iValue=0;
    struct nodeS<T> * temp=NULL;

    if(First==NULL)
    {
        cout<<"Unable to pop the elements as stack is empty."<<endl;
        return -1;
    }
    else
    {
        temp=First;

        iValue=First->data;
        First=First->next;
        delete temp;

        iCount--;
    }

    return iValue;
} 


////////////////////////////////////////////////////////////
//
// Code of Queue
//
//////////////////////////////////////////////////////////
template <class T>
struct nodeQ
{
    T data;
    struct nodeQ *next;
};

template <class T>
class Queue
{
    private:
        struct nodeQ<T> * First;
        int iCount;

    public:
        Queue();
        void Display();
        int Count();

        void EnQueue(T No); //void InsertLast(int No);
        int DeQueue(); // void DeleteFirst();

};


template <class T>
Queue<T>::Queue()
{
    First=NULL;
    iCount=0;
}

template <class T>
void Queue<T>::Display()
{
    cout<<"Elements of stack are: \n";

    struct nodeQ<T> * temp=NULL;
    temp=First;

    while(temp !=NULL)
    {
        cout<<temp->data<<"\n";
        temp=temp->next;
    }
    cout<<endl;
}

template <class T>
int Queue<T>::Count()
{
    return iCount;
}

template <class T>
void Queue<T>::EnQueue(T No)
{
    struct nodeQ<T> * newn=NULL;
    struct nodeQ<T> * temp=NULL;

    newn=new struct nodeQ<T>;

    newn->data=No;
    newn->next=NULL;

    if(First==NULL)
    {
        First=newn;
    }
    else
    {   
        temp=First;

        while(temp->next != NULL)
        {
            temp=temp->next;
        }
        temp->next=newn;

    }
    iCount++;
}

template <class T>
int Queue<T>::DeQueue()
{
    int iValue=0;
    struct nodeQ<T> * temp=NULL;

    if(First==NULL)
    {
        cout<<"Unable to remove the elements as queue is empty."<<endl;
        return -1;
    }
    else
    {
        temp=First;

        iValue=First->data;
        First=First->next;
        delete temp;

        iCount--;
    }

    return iValue;
} 

////////////////////////////////////////////////////////////
//
// Main Function
//
//////////////////////////////////////////////////////////


int main()
{
    cout<<"-------------Singly Linear Linkedlist for Integers-----------------"<<endl;
    SinglyLL <int>*iobjsl=new SinglyLL<int>();
    int iRet=0;

    iobjsl->InsertFirst(51);
    iobjsl->InsertFirst(21);
    iobjsl->InsertFirst(11);
    iobjsl->InsertLast(101);
    iobjsl->InsertLast(111);
    iobjsl->InsertLast(121);
    iobjsl->Display();

    iRet=iobjsl->Count();
    cout<<"Number of elements are: "<<iRet<<endl;

    iobjsl->InsertAtPos(105,5);
    iobjsl->Display();

    iRet=iobjsl->Count();
    cout<<"Number of elements are: "<<iRet<<endl;

    iobjsl->DeleteAtPos(5);
    iobjsl->DeleteFirst();
    iobjsl->DeleteLast();
    iobjsl->Display();

    iRet=iobjsl->Count();
    cout<<"Number of elements are: "<<iRet<<endl;


    // LL of character
    cout<<"-------------Singly Linear Linkedlist for characters-----------------"<<endl;
    SinglyLL <char>* cobjsl=new SinglyLL<char>();

    cobjsl->InsertFirst('c');
    cobjsl->InsertFirst('b');
    cobjsl->InsertFirst('a');
    cobjsl->InsertLast('d');
    cobjsl->InsertLast('e');
    cobjsl->InsertLast('f');
    cobjsl->Display();

    iRet=cobjsl->Count();
    cout<<"Number of elements are: "<<iRet<<endl;

    cobjsl->InsertAtPos('z',5);
    cobjsl->Display();

    iRet=cobjsl->Count();
    cout<<"Number of elements are: "<<iRet<<endl;

    cobjsl->DeleteAtPos(5);
    cobjsl->DeleteFirst();
    cobjsl->DeleteLast();
    cobjsl->Display();

    iRet=cobjsl->Count();
    cout<<"Number of elements are: "<<iRet<<endl;


    // LL of float

    cout<<"-------------Singly Linear Linkedlist for Float-----------------"<<endl;
    SinglyLL <float>* fobjsl=new SinglyLL<float>();

    fobjsl->InsertFirst(10.20f);
    fobjsl->InsertFirst(20.20f);
    fobjsl->InsertFirst(30.20f);
    fobjsl->InsertLast(40.20f);
    fobjsl->InsertLast(50.20f);
    fobjsl->InsertLast(60.20f);
    fobjsl->Display();

    iRet=fobjsl->Count();
    cout<<"Number of elements are: "<<iRet<<endl;

    fobjsl->InsertAtPos(70.20f,5);
    fobjsl->Display();

    iRet=fobjsl->Count();
    cout<<"Number of elements are: "<<iRet<<endl;

    fobjsl->DeleteAtPos(5);
    fobjsl->DeleteFirst();
    fobjsl->DeleteLast();
    fobjsl->Display();

    iRet=fobjsl->Count();
    cout<<"Number of elements are: "<<iRet<<endl;

    // LL of double
    cout<<"-------------Singly Linear Linkedlist for Double-----------------"<<endl;
    SinglyLL <double>* dobjsl=new SinglyLL<double>();

    dobjsl->InsertFirst(10.2012);
    dobjsl->InsertFirst(20.2012);
    dobjsl->InsertFirst(30.2030);
    dobjsl->InsertLast(40.2040);
    dobjsl->InsertLast(50.2050);
    dobjsl->InsertLast(60.2070);
    dobjsl->Display();

    iRet=dobjsl->Count();
    cout<<"Number of elements are: "<<iRet<<endl;

    dobjsl->InsertAtPos(70.20,5);
    dobjsl->Display();

    iRet=dobjsl->Count();
    cout<<"Number of elements are: "<<iRet<<endl;

    dobjsl->DeleteAtPos(5);
    dobjsl->DeleteFirst();
    dobjsl->DeleteLast();
    dobjsl->Display();

    iRet=dobjsl->Count();
    cout<<"Number of elements are: "<<iRet<<endl;

    cout<<"==================================================================="<<endl;

    cout<<"-------------Singly Circular Linkedlist for Integers-----------------"<<endl;
    SinglyCL<int> *iobjsc=new SinglyCL<int>();

    iobjsc->InsertFirst(51);
    iobjsc->InsertFirst(21);
    iobjsc->InsertFirst(11);
    iobjsc->InsertLast(101);
    iobjsc->InsertLast(111);
    iobjsc->InsertLast(121);
    iobjsc->Display();

    iRet=iobjsc->Count();
    cout<<"Number of elements are: "<<iRet<<endl;

    iobjsc->InsertAtPos(105,5);
    iobjsc->Display();

    iRet=iobjsc->Count();
    cout<<"Number of elements are: "<<iRet<<endl;

    iobjsc->DeleteAtPos(5);
    iobjsc->DeleteFirst();
    iobjsc->DeleteLast();
    iobjsc->Display();

    iRet=iobjsc->Count();
    cout<<"Number of elements are: "<<iRet<<endl;


    // LL of character
    cout<<"-------------Singly Circular Linkedlist for characters-----------------"<<endl;
    SinglyCL <char>* cobjsc=new SinglyCL<char>();

    cobjsc->InsertFirst('c');
    cobjsc->InsertFirst('b');
    cobjsc->InsertFirst('a');
    cobjsc->InsertLast('d');
    cobjsc->InsertLast('e');
    cobjsc->InsertLast('f');
    cobjsc->Display();

    iRet=cobjsc->Count();
    cout<<"Number of elements are: "<<iRet<<endl;

    cobjsc->InsertAtPos('z',5);
    cobjsc->Display();

    iRet=cobjsc->Count();
    cout<<"Number of elements are: "<<iRet<<endl;

    cobjsc->DeleteAtPos(5);
    cobjsc->DeleteFirst();
    cobjsc->DeleteLast();
    cobjsc->Display();

    iRet=cobjsc->Count();
    cout<<"Number of elements are: "<<iRet<<endl;


    // LL of float

    cout<<"-------------Singly Circular Linkedlist for Float-----------------"<<endl;
    SinglyCL <float>* fobjsc=new SinglyCL<float>();

    fobjsc->InsertFirst(10.20f);
    fobjsc->InsertFirst(20.20f);
    fobjsc->InsertFirst(30.20f);
    fobjsc->InsertLast(40.20f);
    fobjsc->InsertLast(50.20f);
    fobjsc->InsertLast(60.20f);
    fobjsc->Display();

    iRet=fobjsc->Count();
    cout<<"Number of elements are: "<<iRet<<endl;

    fobjsc->InsertAtPos(70.20f,5);
    fobjsc->Display();

    iRet=fobjsc->Count();
    cout<<"Number of elements are: "<<iRet<<endl;

    fobjsc->DeleteAtPos(5);
    fobjsc->DeleteFirst();
    fobjsc->DeleteLast();
    fobjsc->Display();

    iRet=fobjsc->Count();
    cout<<"Number of elements are: "<<iRet<<endl;

    // LL of double
    cout<<"-------------Singly Circular Linkedlist for Double-----------------"<<endl;
    SinglyCL <double>* dobjsc=new SinglyCL<double>();

    dobjsc->InsertFirst(10.2012);
    dobjsc->InsertFirst(20.2012);
    dobjsc->InsertFirst(30.2030);
    dobjsc->InsertLast(40.2040);
    dobjsc->InsertLast(50.2050);
    dobjsc->InsertLast(60.2070);
    dobjsc->Display();

    iRet=dobjsc->Count();
    cout<<"Number of elements are: "<<iRet<<endl;

    dobjsc->InsertAtPos(70.20,5);
    dobjsc->Display();

    iRet=dobjsc->Count();
    cout<<"Number of elements are: "<<iRet<<endl;

    dobjsc->DeleteAtPos(5);
    dobjsc->DeleteFirst();
    dobjsc->DeleteLast();
    dobjsc->Display();

    iRet=dobjsc->Count();
    cout<<"Number of elements are: "<<iRet<<endl;

    cout<<"========================================================================================="<<endl;
    cout<<"-------------Doubly Linear Linkedlist for Integers-----------------"<<endl;
    DoublyLL<int> *iobjdl=new DoublyLL<int>();

    iobjdl->InsertFirst(51);
    iobjdl->InsertFirst(21);
    iobjdl->InsertFirst(11);
    iobjdl->InsertLast(101);
    iobjdl->InsertLast(111);
    iobjdl->InsertLast(121);
    iobjdl->Display();

    iRet=iobjdl->Count();
    cout<<"Number of elements are: "<<iRet<<endl;

    iobjdl->InsertAtPos(105,5);
    iobjdl->Display();

    iRet=iobjdl->Count();
    cout<<"Number of elements are: "<<iRet<<endl;

    iobjdl->DeleteAtPos(5);
    iobjdl->DeleteFirst();
    iobjdl->DeleteLast();
    iobjdl->Display();

    iRet=iobjdl->Count();
    cout<<"Number of elements are: "<<iRet<<endl;


    // LL of character
    cout<<"-------------Doubly Linear Linkedlist for characters-----------------"<<endl;
    DoublyLL <char>* cobjdl=new DoublyLL<char>();

    cobjdl->InsertFirst('c');
    cobjdl->InsertFirst('b');
    cobjdl->InsertFirst('a');
    cobjdl->InsertLast('d');
    cobjdl->InsertLast('e');
    cobjdl->InsertLast('f');
    cobjdl->Display();

    iRet=cobjdl->Count();
    cout<<"Number of elements are: "<<iRet<<endl;

    cobjdl->InsertAtPos('z',5);
    cobjdl->Display();

    iRet=cobjdl->Count();
    cout<<"Number of elements are: "<<iRet<<endl;

    cobjdl->DeleteAtPos(5);
    cobjdl->DeleteFirst();
    cobjdl->DeleteLast();
    cobjdl->Display();

    iRet=cobjdl->Count();
    cout<<"Number of elements are: "<<iRet<<endl;


    // LL of float

    cout<<"-------------Doubly Linear Linkedlist for Float-----------------"<<endl;
    DoublyLL <float>* fobjdl=new DoublyLL<float>();

    fobjdl->InsertFirst(10.20f);
    fobjdl->InsertFirst(20.20f);
    fobjdl->InsertFirst(30.20f);
    fobjdl->InsertLast(40.20f);
    fobjdl->InsertLast(50.20f);
    fobjdl->InsertLast(60.20f);
    fobjdl->Display();

    iRet=fobjdl->Count();
    cout<<"Number of elements are: "<<iRet<<endl;

    fobjdl->InsertAtPos(70.20f,5);
    fobjdl->Display();

    iRet=fobjdl->Count();
    cout<<"Number of elements are: "<<iRet<<endl;

    fobjdl->DeleteAtPos(5);
    fobjdl->DeleteFirst();
    fobjdl->DeleteLast();
    fobjdl->Display();

    iRet=fobjdl->Count();
    cout<<"Number of elements are: "<<iRet<<endl;

    // LL of double
    cout<<"-------------Doubly Linear Linkedlist for Double-----------------"<<endl;
    DoublyLL <double>* dobjdl=new DoublyLL<double>();

    dobjdl->InsertFirst(10.2012);
    dobjdl->InsertFirst(20.2012);
    dobjdl->InsertFirst(30.2030);
    dobjdl->InsertLast(40.2040);
    dobjdl->InsertLast(50.2050);
    dobjdl->InsertLast(60.2070);
    dobjdl->Display();

    iRet=dobjdl->Count();
    cout<<"Number of elements are: "<<iRet<<endl;

    dobjdl->InsertAtPos(70.20,5);
    dobjdl->Display();

    iRet=dobjdl->Count();
    cout<<"Number of elements are: "<<iRet<<endl;

    dobjdl->DeleteAtPos(5);
    dobjdl->DeleteFirst();
    dobjdl->DeleteLast();
    dobjdl->Display();

    iRet=dobjdl->Count();
    cout<<"Number of elements are: "<<iRet<<endl;

    cout<<"================================================================================"<<endl; 
    cout<<"-------------Doubly Circular Linkedlist for Integers-----------------"<<endl;
    DoublyCL <int>*iobjdc=new DoublyCL<int>();

    iobjdc->InsertFirst(51);
    iobjdc->InsertFirst(21);
    iobjdc->InsertFirst(11);
    iobjdc->InsertLast(101);
    iobjdc->InsertLast(111);
    iobjdc->InsertLast(121);
    iobjdc->Display();

    iRet=iobjdc->Count();
    cout<<"Number of elements are: "<<iRet<<endl;

    iobjdc->InsertAtPos(105,5);
    iobjdc->Display();

    iRet=iobjdc->Count();
    cout<<"Number of elements are: "<<iRet<<endl;

    iobjdc->DeleteAtPos(5);
    iobjdc->DeleteFirst();
    iobjdc->DeleteLast();
    iobjdc->Display();

    iRet=iobjdc->Count();
    cout<<"Number of elements are: "<<iRet<<endl;


    // LL of character
    cout<<"-------------Doubly Circular Linkedlist for characters-----------------"<<endl;
    DoublyCL <char>* cobjdc=new DoublyCL<char>();

    cobjdc->InsertFirst('c');
    cobjdc->InsertFirst('b');
    cobjdc->InsertFirst('a');
    cobjdc->InsertLast('d');
    cobjdc->InsertLast('e');
    cobjdc->InsertLast('f');
    cobjdc->Display();

    iRet=cobjdc->Count();
    cout<<"Number of elements are: "<<iRet<<endl;

    cobjdc->InsertAtPos('z',5);
    cobjdc->Display();

    iRet=cobjdc->Count();
    cout<<"Number of elements are: "<<iRet<<endl;

    cobjdc->DeleteAtPos(5);
    cobjdc->DeleteFirst();
    cobjdc->DeleteLast();
    cobjdc->Display();

    iRet=cobjdc->Count();
    cout<<"Number of elements are: "<<iRet<<endl;


    // LL of float

    cout<<"-------------Doubly Circular Linkedlist for Float-----------------"<<endl;
    DoublyCL <float>* fobjdc=new DoublyCL<float>();

    fobjdc->InsertFirst(10.20f);
    fobjdc->InsertFirst(20.20f);
    fobjdc->InsertFirst(30.20f);
    fobjdc->InsertLast(40.20f);
    fobjdc->InsertLast(50.20f);
    fobjdc->InsertLast(60.20f);
    fobjdc->Display();

    iRet=fobjdc->Count();
    cout<<"Number of elements are: "<<iRet<<endl;

    fobjdc->InsertAtPos(70.20f,5);
    fobjdc->Display();

    iRet=fobjdc->Count();
    cout<<"Number of elements are: "<<iRet<<endl;

    fobjdc->DeleteAtPos(5);
    fobjdc->DeleteFirst();
    fobjdc->DeleteLast();
    fobjdc->Display();

    iRet=fobjdc->Count();
    cout<<"Number of elements are: "<<iRet<<endl;

    // LL of double
    cout<<"-------------Doubly Circular Linkedlist for Double-----------------"<<endl;
    DoublyCL <double>* dobjdc=new DoublyCL<double>();

    dobjdc->InsertFirst(10.2012);
    dobjdc->InsertFirst(20.2012);
    dobjdc->InsertFirst(30.2030);
    dobjdc->InsertLast(40.2040);
    dobjdc->InsertLast(50.2050);
    dobjdc->InsertLast(60.2070);
    dobjdc->Display();

    iRet=dobjdc->Count();
    cout<<"Number of elements are: "<<iRet<<endl;

    dobjdc->InsertAtPos(70.20,5);
    dobjdc->Display();

    iRet=dobjdc->Count();
    cout<<"Number of elements are: "<<iRet<<endl;

    dobjdc->DeleteAtPos(5);
    dobjdc->DeleteFirst();
    dobjdc->DeleteLast();
    dobjdc->Display();

    iRet=dobjdc->Count();
    cout<<"Number of elements are: "<<iRet<<endl;

    cout<<"===============================================================";
    cout<<"-------------  Stack for Integer-----------------"<<endl;
    Stack<int> *iobjs= new Stack<int>();

    iobjs->Push(10);
    iobjs->Push(20);
    iobjs->Push(30);
    iobjs->Push(40);

    iobjs->Display();

    iRet=iobjs->Count();
    cout<<"Number of elements: "<<iRet<<endl;

    iRet=iobjs->Pop();
    cout<<"Popped element is: "<<iRet<<endl;;
    iobjs->Display();

    iRet=iobjs->Count();
    cout<<"Number of elements: "<<iRet<<endl;

    iobjs->Push(50);

    iobjs->Display();

    iRet=iobjs->Count();
    cout<<"Number of elements: "<<iRet<<endl;


    cout<<"-------------  Stack for Character-----------------"<<endl;
    Stack<char> *cobjs= new Stack<char>();

    cobjs->Push('s');
    cobjs->Push('m');
    cobjs->Push('k');
    cobjs->Push('r');

    cobjs->Display();

    iRet=cobjs->Count();
    cout<<"Number of elements: "<<iRet<<endl;

    iRet=cobjs->Pop();
    cout<<"Popped element is: "<<iRet<<endl;;
    cobjs->Display();

    iRet=cobjs->Count();
    cout<<"Number of elements: "<<iRet<<endl;

    cobjs->Push('z');

    cobjs->Display();

    iRet=cobjs->Count();
    cout<<"Number of elements: "<<iRet<<endl;

    cout<<"-------------  Stack for  Float-----------------"<<endl;
    Stack<float> *fobjs= new Stack<float>();

    fobjs->Push(10.20f);
    fobjs->Push(20.45f);
    fobjs->Push(30.0f);
    fobjs->Push(40.52f);

    fobjs->Display();

    iRet=fobjs->Count();
    cout<<"Number of elements: "<<iRet<<endl;

    iRet=fobjs->Pop();
    cout<<"Popped element is: "<<iRet<<endl;;
    fobjs->Display();

    iRet=fobjs->Count();
    cout<<"Number of elements: "<<iRet<<endl;

    fobjs->Push(1.45f);

    fobjs->Display();

    iRet=fobjs->Count();
    cout<<"Number of elements: "<<iRet<<endl;

    cout<<"-------------  Stack for  Double-----------------"<<endl;
    Stack<double> *dobjs= new Stack<double>();

    dobjs->Push(10.20);
    dobjs->Push(20.45);
    dobjs->Push(30.0);
    dobjs->Push(40.52);

    dobjs->Display();

    iRet=dobjs->Count();
    cout<<"Number of elements: "<<iRet<<endl;

    iRet=dobjs->Pop();
    cout<<"Popped element is: "<<iRet<<endl;;
    dobjs->Display();

    iRet=dobjs->Count();
    cout<<"Number of elements: "<<iRet<<endl;

    dobjs->Push(1.45);

    dobjs->Display();

    iRet=dobjs->Count();
    cout<<"Number of elements: "<<iRet<<endl;

    cout<<"===============================================================";
    cout<<"-------------  Queue for Integer-----------------"<<endl;
    Queue<int> *iobjq=new Queue<int>();

    iobjq->EnQueue(10);
    iobjq->EnQueue(20);
    iobjq->EnQueue(30);
    iobjq->EnQueue(40);

    iobjq->Display();

    iRet=iobjq->Count();
    cout<<"Number of elements: "<<iRet<<endl;

    iRet=iobjq->DeQueue();
    cout<<"Removed element is: "<<iRet<<endl;;
    iobjq->Display();

    iRet=iobjq->Count();
    cout<<"Number of elements: "<<iRet<<endl;

    iobjq->EnQueue(50);

    iobjq->Display();

    iRet=iobjq->Count();
    cout<<"Number of elements: "<<iRet<<endl;

    cout<<"-------------  Queue for Character-----------------"<<endl;
    Queue<char> *cobjq=new Queue<char>();

    cobjq->EnQueue('s');
    cobjq->EnQueue('m');
    cobjq->EnQueue('k');
    cobjq->EnQueue('r');

    cobjq->Display();

    iRet=cobjq->Count();
    cout<<"Number of elements: "<<iRet<<endl;

    iRet=cobjq->DeQueue();
    cout<<"Removed element is: "<<iRet<<endl;;
    iobjq->Display();

    iRet=cobjq->Count();
    cout<<"Number of elements: "<<iRet<<endl;

    cobjq->EnQueue('z');

    cobjq->Display();

    iRet=cobjq->Count();
    cout<<"Number of elements: "<<iRet<<endl;

    
    cout<<"-------------  Queue for Float-----------------"<<endl;
    Queue<float> *fobjq=new Queue<float>();

    fobjq->EnQueue(10.20f);
    fobjq->EnQueue(20.45f);
    fobjq->EnQueue(30.0f);
    fobjq->EnQueue(40.52f);

    fobjq->Display();

    iRet=fobjq->Count();
    cout<<"Number of elements: "<<iRet<<endl;

    iRet=fobjq->DeQueue();
    cout<<"Removed element is: "<<iRet<<endl;;
    fobjq->Display();

    iRet=fobjq->Count();
    cout<<"Number of elements: "<<iRet<<endl;

    fobjq->EnQueue(1.45f);

    fobjq->Display();

    iRet=fobjq->Count();
    cout<<"Number of elements: "<<iRet<<endl;


    cout<<"-------------  Queue for Double-----------------"<<endl;
    Queue<double> *dobjq=new Queue<double>();

    dobjq->EnQueue(10.20);
    dobjq->EnQueue(20.45);
    dobjq->EnQueue(30.0);
    dobjq->EnQueue(40.52);

    dobjq->Display();

    iRet=dobjq->Count();
    cout<<"Number of elements: "<<iRet<<endl;

    iRet=dobjq->DeQueue();
    cout<<"Removed element is: "<<iRet<<endl;;
    dobjq->Display();

    iRet=dobjq->Count();
    cout<<"Number of elements: "<<iRet<<endl;

    dobjq->EnQueue(1.45);

    dobjq->Display();

    iRet=dobjq->Count();
    cout<<"Number of elements: "<<iRet<<endl;
    return 0;
}