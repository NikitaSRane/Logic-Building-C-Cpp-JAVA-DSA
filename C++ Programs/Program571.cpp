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

int main()
{
    int ilength=0;

    cout<<"Enter the number of elements: "<<endl;
    cin>>ilength;

    ArrayX<double> *aobj=new ArrayX<double>(ilength);

    aobj->Accept();
    aobj->Display();

    delete aobj;

    return 0;
}