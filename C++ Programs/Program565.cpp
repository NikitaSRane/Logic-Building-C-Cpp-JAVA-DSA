#include<iostream>
using namespace std;

int main()
{
    int *ptr=NULL;
    int ilength=0, i=0;

    cout<<"Enter the number of elements: "<<endl;
    cin>>ilength;

    ptr=new int[ilength];

    cout<<"Enter the elements: \n";

    for(i=0;i<ilength;i++)
    {
        cin>>ptr[i];
    }
    cout<<"Entered elements are: \n";
    for(i=0;i<ilength;i++)
    {
        cout<<ptr[i]<<endl;
    }

    delete []ptr;
    return 0;
}