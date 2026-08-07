#include<iostream>
using namespace std;

template <class T>
void Swap(T &A, T &B)
{
    T temp;
    temp=A;
    A=B;
    B=temp;
}

int main()
{
    char cValue1='X', cValue2='Y';

    int iValue1=10, iValue2=20;


    cout<<"Value of variable cValue1 is: "<<cValue1<<endl;
    cout<<"Value of variable cValue2 is: "<<cValue2<<endl;

    Swap(cValue1,cValue2);

    cout<<"Value of variable cValue1 after swapping is: "<<cValue1<<endl;
    cout<<"Value of variable cValue2 after swapping is: "<<cValue2<<endl;


    cout<<"Value of variable iValue1 is: "<<iValue1<<endl;
    cout<<"Value of variable iValue2 is: "<<iValue2<<endl;

    Swap(iValue1,iValue2);

    cout<<"Value of variable iValue1 after swapping is: "<<iValue1<<endl;
    cout<<"Value of variable iValue2 after swapping is: "<<iValue2<<endl;


    return 0;
}