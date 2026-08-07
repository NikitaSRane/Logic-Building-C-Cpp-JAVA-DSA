#include<iostream>
using namespace std;

float average(int Arr[], int isize)
{
    int i=0;
    int iSum=0;
    float fAns=0.0f;

    for(i=0;i<isize;i++)
    {
        iSum=iSum+Arr[i];
    }
    fAns=iSum / isize;
    
    return fAns;
}

int main()
{

    int iLength=0;
    int i=0;
    float fRet=0.0f;
    int *ptr=NULL;

    cout<<"Enter number of elements that you want to strore:"<<endl;
    cin>>iLength;

    ptr=new int[iLength];
    // ptr=(int*)malloc(sizeof(int)*iLength);

    cout<<"Enter "<<iLength<<" elements:"<<endl;

    for(i=0;i<iLength;i++)
    {
        cin>>ptr[i];
    }
    
    fRet=average(ptr,iLength);
    cout<<"Average is: "<<fRet<<endl;

    delete []ptr;
    //free(ptr);
    return 0;
}