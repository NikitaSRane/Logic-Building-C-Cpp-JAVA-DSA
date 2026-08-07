#include<iostream>
using namespace std;


int main()
{
    int *Arr=NULL;
    int iCount=0;
    int i=0;

    cout<<"Enter number of elements:"<<endl;
    cin>>iCount;

    Arr=new int[iCount];
    
    cout<<"Enter number:"<<endl;
    for(i=0;i<iCount;i++)
    {
        cin>>Arr[i];
    }
    cout<<"Entered elements are:"<<endl;
    for(i=0;i<iCount;i++)
    {
        cout<<Arr[i]<<endl;
    }

    delete[] Arr;
}