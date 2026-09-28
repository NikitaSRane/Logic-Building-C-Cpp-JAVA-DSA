#include<iostream>
using namespace std;

int main()
{
    int *ptr=NULL;
    int iValue=0;
    int iCnt=0;

    cout<<"Enter the number of elements: ";
    cin>>iValue;

    ptr=new int[iValue];

    cout<<"Enter the elements:"<<endl;
    for(iCnt=0;iCnt<iValue;iCnt++)
    {
        cin>>ptr[iCnt];
    }

    cout<<"Elements are:"<<endl;
    for(iCnt=0;iCnt<iValue;iCnt++)
    {
        cout<<ptr[iCnt]<<endl;
    }
    return 0;
}