#include<iostream>
using namespace std;

float Maximum(float Arr[],int Size)
{
    int i;
    float iMax;

    iMax=Arr[0];
    for(i=0;i<Size;i++)
    {
        if(Arr[i] > iMax)
        {
            iMax=Arr[i];
        }  
    }
    return iMax;
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

    fRet=Maximum(ptr,iLength);
    cout<<"Maximum element is: "<<fRet;


    delete []ptr;
    return 0;
}