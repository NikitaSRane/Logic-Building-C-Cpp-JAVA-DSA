// Write a generic program to accept N values and count of frequency of any specific value.
// Input: 10    20  30  40  10    60  10  10  50
// Input: 9
// Output:  4

#include<iostream>
using namespace std;


///////////////////////////////////////////////
//
// Function Name: Frequency
// Description: Return frequency of specific value of N values.
// Input:  Generic type,Integer, Generic type
// Output: Integer
// Author: Nikita Sagar Rane
// Date:04/07/2024
//
///////////////////////////////////////////////

template <class T>
int Frequency(T Arr[], int size, T Value)
{
    int iCnt=0;
    int iCount=0;

    for(iCnt=0; iCnt <size; iCnt++)
    {
        if(Arr[iCnt] == Value)
        {
            iCount++;
        }
    }
    return iCount;
}

int main()
{
    int Arr[]={10,20,30,40,10,60,10,10,50};
    int iRet=0;
    int Value=10;

    char CArr[]={'A','B','C','U','B','D'};
    char cValue='B';


    iRet=Frequency(Arr,9,Value);
    cout<<"Frequency is :"<<iRet<<endl;

    iRet=Frequency(CArr,6,cValue);
    cout<<"Frequency is :"<<iRet<<endl;

    return 0;
}