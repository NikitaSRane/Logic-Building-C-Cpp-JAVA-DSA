#include<iostream>
using namespace std;

template <class T>
T Minimum(T Arr[],int Size)
{
    int i;
    T Min;

    Min=Arr[0];
    for(i=0;i<Size;i++)
    {
        if(Arr[i] < Min)
        {
            Min=Arr[i];
        }  
    }
    return Min;
}

int main()
{
    int iLength=0;
    float * ptr=NULL;
    int i=0;
    float fRet=0.0f;

    cout<<"Enter number of elements:"<<endl;
    cin>>iLength;

    ptr=new float[iLength];

    cout<<"Enter number of elements: "<<endl;

    for(i=0;i<iLength;i++)
    {
        cin>>ptr[i];
    }

    fRet=Minimum(ptr,iLength);
    cout<<"Minimum element is: "<<fRet;


    delete []ptr;
    return 0;
}