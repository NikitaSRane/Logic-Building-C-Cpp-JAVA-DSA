// Write a generic program to accept N values and reverse the contents.
// Input: 10   20  30  40  10   60  30  10  50
// Output:  50  10  30  60  10  40  30  20  10

#include<iostream>
using namespace std;

///////////////////////////////////////////////
//
// Function Name: Swap
// Description: Display values in reverse order
// Input:  Generic type,Integer
// Output: None
// Author: Nikita Sagar Rane
// Date:04/07/2024
//
///////////////////////////////////////////////

template <class T>
void Swap( T Arr[], int size)
{
    int Start=0;
    int End=size-1;
    T temp=0;

    while(Start < End)
    {
        temp=Arr[Start];
        Arr[Start]=Arr[End];
        Arr[End]=temp;

        Start++;
        End--;
    }

}


int main()
{

    int Arr[]={10,20,30,40,10,60,30,10,50};

    char cArr[]={'a','b','c','d','e'};
    int i=0;
    cout<<"Integer swapping."<<endl;
    for(i=0;i<9; i++)
    {
        cout<<Arr[i]<<"\t";
    }
    cout<<endl;

    Swap(Arr,9);

    for(i=0;i<9; i++)
    {
        cout<<Arr[i]<<"\t";
    }
    cout<<endl;
    cout<<"Character swapping."<<endl;
    
    for(i=0;i<5; i++)
    {
        cout<<cArr[i]<<"\t";
    }
    cout<<endl;

    Swap(cArr,5);

    for(i=0;i<5; i++)
    {
        cout<<cArr[i]<<"\t";
    }


    return 0;
}