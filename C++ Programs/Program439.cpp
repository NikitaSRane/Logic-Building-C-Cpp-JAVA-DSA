#include<iostream>
using namespace std;

double Addition(double fNo1, double fNo2)
{
    double fAns=0;

    fAns=fNo1+fNo2;

    return fAns;
}

int main()
{
    double fValue1=10.10, fValue2=11.20;
    double fRet=0.0;

    fRet=Addition(fValue1,fValue2);
    cout<<"Addition is: "<<fRet;

    return 0;
}