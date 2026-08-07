#include<iostream>
using namespace std;

template<class T>
T Addition(T iNo1, T iNo2)
{
    T iAns=0;

    iAns=iNo1+iNo2;

    return iAns;
}

int main()
{
    double fValue1=10.10, fValue2=11.20;
    double fRet=0.0;

    fRet=Addition(fValue1,fValue2);
    cout<<"Addition is: "<<fRet;

    return 0;
}