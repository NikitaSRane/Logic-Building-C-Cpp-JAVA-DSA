// Write a generic program to accept N values from  user and return addition of that values.

#include<iostream>
using namespace std;

///////////////////////////////////////////////
//
// Function Name: Addition
// Description: Return addition of N
// Input:  Generic type,Integer
// Output: Generic type
// Author: Nikita Sagar Rane
// Date:04/07/2024
//
///////////////////////////////////////////////

template <class T>
T Addition(T Arr[], int size)
{
    int iCnt=0;
    T Sum=0;

    for(iCnt=0; iCnt <size ; iCnt++)
    {
        Sum=Sum+Arr[iCnt];
    }
    return Sum;
}


int main()
{

    int iArr[]={10,20,30,40,50};
    float fArr[]={10.4f,20.6f,10.52f};
    double dArr[]={10.4,20.6,10.52};

    int iRet=0;
    float fRet=0.0f;
    double dRet=0.0;

    iRet=Addition(iArr,5);
    cout<<"Addition of integer is: "<<iRet<<endl;

    fRet=Addition(fArr,3);
    cout<<"Addition of float is: "<<fRet<<endl;

    dRet=Addition(dArr,3);
    cout<<"Addition of double is: "<<dRet<<endl;

    return 0;
}

