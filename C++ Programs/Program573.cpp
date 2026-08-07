#include<iostream>
using namespace std;

template <class T>
class ArrayX
{
    public:
    T *Arr;
    int isize;

    ArrayX(int Value);
    ~ArrayX();
    void Accept();
    void Display();
    bool LinearSearch(T);
    bool BidirectionalSearch(T);
};

template <class T>
ArrayX<T>::ArrayX(int Value)
{
    this->isize=Value;
    this->Arr=new T[isize];
}

template <class T>
ArrayX<T>::~ArrayX()
{
    delete []Arr;
}

template <class T>
void ArrayX<T>::Accept()
{
    int i=0;
    cout<<"Enter the elements: \n";

    for(i=0;i<isize;i++)
    {
        cin>>Arr[i];
    }
}

template <class T>
void ArrayX<T>::Display()
{
    int i=0;
        
    cout<<"Entered elements are: \n";
    for(i=0;i<isize;i++)
    {
        cout<<Arr[i]<<endl;
    }
}

template <class T>
bool ArrayX<T>::LinearSearch(T Value)
{
    int i=0;
    bool bflag=false;

    for(i=0; i< isize; i++)
    {
        if(Arr[i] == Value)
        {
            bflag=true;
            break;
        }
    }
    return bflag;
}

template <class T>
bool ArrayX<T>::BidirectionalSearch(T Value)
{
    int iStart=0, iEnd=0;
    bool bflag=false;

    for(iStart= 0, iEnd= isize-1; iStart <= iEnd; iStart++, iEnd--)
    {
        if(Arr[iStart] == Value || Arr[iEnd]== Value)
        {
            bflag=true;
            break;
        }
    }
    return bflag;
}

int main()
{
    int ilength=0;
    int iNo=0, bret=false;

    cout<<"Enter the number of elements: "<<endl;
    cin>>ilength;

    ArrayX<int> *aobj=new ArrayX<int>(ilength);

    aobj->Accept();
    aobj->Display();

    cout<<"Enter the number which you want to search: \n";
    cin>>iNo;

    bret=aobj->BidirectionalSearch(iNo);
    if(bret == true)
    {
        cout<<"Element is found \n";
    }
    else
    {
        cout<<"Element not found\n";
    }


    delete aobj;

    return 0;
}