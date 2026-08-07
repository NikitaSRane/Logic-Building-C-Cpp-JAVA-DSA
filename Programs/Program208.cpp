#include<iostream>
using namespace std;

int main()
{

    int iLength=0;
    int i=0;
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
    cout<<"Entered elements are:"<<endl;

    for(i=0;i<iLength;i++)
    {
        cout<<ptr[i]<<endl;
    }

    delete []ptr;
    //free(ptr);
    return 0;
}