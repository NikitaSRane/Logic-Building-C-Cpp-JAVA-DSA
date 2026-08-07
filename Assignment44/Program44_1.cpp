// Write a generic program to multiply two numbers.

#include<iostream>
using namespace std;


///////////////////////////////////////////////
//
// Function Name: Multiply
// Description: Insert element in linked list.
// Input:  Generic type,Generic type
// Output: Generic type
// Author: Nikita Sagar Rane
// Date:04/07/2024
//
///////////////////////////////////////////////


template <class T>
T Multiply(T No1, T No2)
{
    T Ans;

    Ans=No1*No2;

    return Ans;
}

int main()
{
    int iRet=0;
    float fRet=0.0f;
    double dRet=0.0;

    iRet=Multiply(10,20);
    cout<<"Multiplication of integers is: "<<iRet<<endl;

    fRet=Multiply(10.10f,20.40f);
    cout<<"Multiplication of floats is: "<<fRet<<endl;

    dRet=Multiply(10.450,20.2517);
    cout<<"Multiplication of double is: "<<dRet<<endl;

    return 0;
}

