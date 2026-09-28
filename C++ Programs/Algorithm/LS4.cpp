#include<iostream>
using namespace std;

template <class T>
class ArrayX
{
    public:
    int iSize;
    T *ptr;

    ArrayX(int iNo);
    ~ArrayX();
    void Accept();
    void Display();
   
};

template <class T>
ArrayX<T>::ArrayX(int iNo)
{
    iSize=iNo;
    ptr=new T[iSize];
}

template <class T>
ArrayX<T>::~ArrayX()
{
    delete []ptr;
}

template <class T>
void ArrayX<T>::Accept()
{
    int iCnt=0;

    cout<<"Enter "<<iSize<<" elements: "<<endl;
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        cin>>ptr[iCnt];
    }
}

template <class T>
void ArrayX<T>::Display()
{
    int iCnt=0;

    cout<<"Elements are: "<<endl;
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        cout<<ptr[iCnt]<<endl;
    }
}

int main()
{
    int iValue=0;

    cout<<"Enter number of elements: ";
    cin>>iValue;

    ArrayX<int> *lobj=new ArrayX<int>(iValue); // object crated dynamically
    lobj->Accept();
    lobj->Display();

    ArrayX<char> sobj(iValue); // object created statically
    sobj.Accept();
    sobj.Display();

    delete lobj;

    return 0;
}