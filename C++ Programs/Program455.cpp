#include<iostream>
using namespace std;

int Addition(int Arr[],int Size)
{
    int i;
    int Ans;

    for(i=0;i<Size;i++)
    {
        Ans=Ans+Arr[i];   
    }
    return Ans;
}

int main()
{
    int iLength=0;
    int * ptr=NULL;
    int i=0, iRet=0;

    cout<<"Enter number of elements:"<<endl;
    cin>>iLength;

    ptr=new int[iLength];

    cout<<"Enter number of elements: "<<endl;

    for(i=0;i<iLength;i++)
    {
        cin>>ptr[i];
    }

    iRet=Addition(ptr,iLength);
    cout<<"Addition is: "<<iRet;


    delete []ptr;
    return 0;
}