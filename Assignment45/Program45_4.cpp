// Write a generic program to accept N values and search first occurence of any specific value.
// Input: 10    20  30  40  10    60  30  10  50
// Input: 30
// Output:  3

#include<iostream>
using namespace std;


///////////////////////////////////////////////
//
// Function Name: SearchLast
// Description: Return last occurence of specific value of N values.
// Input:  Generic type,Integer, Generic type
// Output: Integer
// Author: Nikita Sagar Rane
// Date:04/07/2024
//
///////////////////////////////////////////////

template <class T>
int SearchLast(T Arr[], int size, T Value)
{
    int iCnt=0;
    int iCount=0;

    for(iCnt=size; iCnt >0; iCnt--)
    {
        if(Arr[iCnt]==Value)
        {
            break;
        }
    }
    return iCnt+1;
}

int main()
{
    int Arr[]={10,20,30,40,10,60,30,10,50};
    int iRet=0;
    int Value=30;

    char CArr[]={'A','B','C','U','B','D'};
    char cValue='B';


    iRet=SearchLast(Arr,9,Value);
    cout<<"Last occurence is :"<<iRet<<endl;

    iRet=SearchLast(CArr,6,cValue);
    cout<<"Last occurence is :"<<iRet<<endl;

    return 0;
}