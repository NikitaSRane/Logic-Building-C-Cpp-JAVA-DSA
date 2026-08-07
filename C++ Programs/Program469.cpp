#include<iostream>
using namespace std;

template <class T>
class ArrayX
{
    public:
        T *Arr;
        int iSize;

        ArrayX(int No);
        ~ArrayX();
        void Accept();
        void Display();
        T Addition();
};

template <class T>
ArrayX<T>::ArrayX(int No)
{
    iSize=No;
    Arr=new T[iSize];
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
    for(i=0;i<iSize ;i++)
    {
        cin>>Arr[i];
    }
}

template <class T>
void ArrayX<T>::Display()
{
    int i=0;

    cout<<"Entered elements are: \n";
    for(i=0;i<iSize ;i++)
    {
        cout<<Arr[i]<<endl;
    }
}

template <class T>
T ArrayX<T>::Addition()
{
    int i=0;
    T Sum=0;

    for(i=0; i<iSize;i++)
    {
        Sum=Sum+Arr[i];
    }
    return Sum;
}

int main()
{

    ArrayX<float> *aobj=new ArrayX<float>(5);
    //ArrayX <float>aobj(5); 

    aobj->Accept();
    aobj->Display();

    cout<<"Addition is: "<<aobj->Addition();

    return 0;
}