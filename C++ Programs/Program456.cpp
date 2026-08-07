#include<iostream>
using namespace std;

float Addition(float Arr[],int Size)
{
    int i;
    float Ans;

    for(i=0;i<Size;i++)
    {
        Ans=Ans+Arr[i];   
    }
    return Ans;
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

    fRet=Addition(ptr,iLength);
    cout<<"Addition is: "<<fRet;


    delete []ptr;
    return 0;
}