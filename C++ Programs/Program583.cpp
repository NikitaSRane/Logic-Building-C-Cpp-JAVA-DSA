// bubble sort

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
    bool BinarySearch(T);
    void BubbleSortEfficient();

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
        cout<<Arr[i]<<"\t";
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
    int iStart=0, iEnd=isize-1;
    bool bflag=false;

    while(iStart <= iEnd)
    {
        if(Arr[iStart] == Value || Arr[iEnd]== Value)
        {
            bflag=true;
            break;
        }
        iStart++;
        iEnd--;
    }
    return bflag;
}

template <class T>
bool ArrayX<T>::BinarySearch(T Value)
{
    int iStart=0, iEnd=0, iMid=0;
    bool bflag=false;

    iStart=0;
    iEnd=isize-1;

    while(iStart <= iEnd)
    {
        iMid=iStart+((iEnd-iStart)/2);

        if(Arr[iMid]==Value || Arr[iStart] == Value || Arr[iEnd] == Value)
        {
            bflag=true;
            break;
        }
        else if(Value < Arr[iMid])
        {
            iStart=iMid+1;
        }
        else if(Value > Arr[iMid])
        {
            iEnd=iMid-1;
        }

        iStart++;
        iEnd--;
    }
    return bflag;
}

template <class T>
void ArrayX<T>::BubbleSortEfficient()
{
    T temp;
    int i=0, j=0;
    bool bflag=true;

    //  1       2       3
    for(i=0; (i< isize-1) && (bflag ==true) ;i++) // outer loop
    {
        bflag=false;

        //  1       2       3
        for(j=0; j<isize-1- i; j++) // inner loop
        {
            if(Arr[j] > Arr[j+1])
            {
                temp=Arr[j];
                Arr[j]=Arr[j+1];
                Arr[j+1]=temp;
                bflag=true;
            }
        }
        cout<<"Array after pass :"<<i+1<<"\n";
        Display();
    }
}

int main()
{
    int ilength=0;
    int iNo=0, bret=false;

    cout<<"Enter the number of elements: "<<endl;
    cin>>ilength;

    ArrayX<int> *aobj=new ArrayX<int>(ilength);

    aobj->Accept();

    cout<<"Data before sorting: \n";
    aobj->Display();

    aobj->BubbleSortEfficient();

    cout<<"Data after sorting: \n";
    aobj->Display();

    delete aobj;

    return 0;
}