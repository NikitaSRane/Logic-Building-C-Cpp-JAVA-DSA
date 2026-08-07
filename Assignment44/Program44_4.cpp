// Write a generic program to accept N values from user and return largest value.

#include<iostream>
using namespace std;

///////////////////////////////////////////////
//
// Function Name: Maximum
// Description: Return largest value from N values
// Input:  Generic type,Integer
// Output: Generic type
// Author: Nikita Sagar Rane
// Date:04/07/2024
//
///////////////////////////////////////////////

template <class T>
T Maximum(T Arr[] , int size)
{
    int iCnt=0;
    T Max;

    Max=Arr[0];

    for(iCnt=0;iCnt<size; iCnt++)
    {
        if(Arr[iCnt] > Max)
        {
            Max=Arr[iCnt];
        }
    }
    return Max;
}

int main()
{

    int iArr[]={10,20,30,40,50};
    float fArr[]={10.4f,20.6f,10.52f};
    double dArr[]={10.4,20.6,10.52};

    int iRet=0;
    float fRet=0.0f;
    double dRet=0.0;

    iRet=Maximum(iArr,5);
    cout<<"Largest value of integer is: "<<iRet<<endl;

    fRet=Maximum(fArr,3);
    cout<<"Largest value of float is: "<<fRet<<endl;

    dRet=Maximum(dArr,3);
    cout<<"Largest value of double is: "<<dRet<<endl;

    return 0;
}