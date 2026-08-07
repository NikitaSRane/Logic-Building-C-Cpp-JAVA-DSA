#include<iostream>
using namespace std;

template<class T>
T Addition(T No1, T No2)
{
    T Ans;

    Ans=No1+No2;

    return Ans;
}

int main()
{

    int dValue1=10.10, dValue2=11.20;
    int dRet=0.0;


    double dValue1=10.10, dValue2=11.20;
    double dRet=0.0;

    float fValue1=10.10f, fValue2=11.20f;
    float fRet=0.0f;

    dRet=Addition(dValue1,dValue2);
    cout<<"Addition of doubles is: "<<dRet<<endl;


    fRet=Addition(fValue1,fValue2);
    cout<<"Addition of floats is: "<<fRet<<endl;

    return 0;
}