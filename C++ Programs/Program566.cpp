#include<iostream>
using namespace std;

void Accept(int Arr[], int isize)
{
    int i=0;
    cout<<"Enter the elements: \n";

    for(i=0;i<isize;i++)
    {
        cin>>Arr[i];
    }
}

void Display(int Arr[], int isize)
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
    int *ptr=NULL;
    int ilength=0;

    cout<<"Enter the number of elements: "<<endl;
    cin>>ilength;

    ptr=new int[ilength];

    Accept(ptr,ilength);
    Display(ptr,ilength);


    delete []ptr;
    return 0;
}