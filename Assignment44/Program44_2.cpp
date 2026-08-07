// Write a generic program to find largest number from three numbers.

#include<iostream>
using namespace std;

///////////////////////////////////////////////
//
// Function Name: Max
// Description: Return maximum number from three numbers
// Input:  Generic type,Generic type
// Output: Generic type
// Author: Nikita Sagar Rane
// Date:04/07/2024
//
///////////////////////////////////////////////

template <class T>
T Max(T No1,T No2,T No3)
{
    T iMax=0;

    if((No1 > No2)&&(No1 > No3 ))
    {
        iMax=No1;
    }
    else if((No2 > No1)&&(No2 >No3))
    {
        iMax=No2;
    }
    else
    {
        iMax=No3;
    }
    return iMax;
}

int main()
{
    int iRet=0;
    float fRet=0.0f;
    double dRet=0.0;

    iRet=Max(400,2000,30);
    cout<<"Largest number is of type integer: "<<iRet<<endl;

    fRet=Max(10.10f,20.40f,30.60f);
    cout<<"Largest number is of type float: "<<fRet<<endl;

    dRet=Max(10.450,20.2517,541.23);
    cout<<"Largest number is of type double: "<<dRet<<endl;

    return 0;
}

