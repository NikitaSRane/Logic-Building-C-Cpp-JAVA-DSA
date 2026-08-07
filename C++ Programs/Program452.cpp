#include<iostream>
using namespace std;

void Swap(char &A, char &B)
{
    char temp;
    temp=A;
    A=B;
    B=temp;
}

int main()
{
    char iValue1='X', iValue2='Y';

    cout<<"Value of variable iValue1 is: "<<iValue1<<endl;
    cout<<"Value of variable iValue2 is: "<<iValue2<<endl;

    Swap(iValue1,iValue2);

    cout<<"Value of variable iValue1 after swapping is: "<<iValue1<<endl;
    cout<<"Value of variable iValue2 after swapping is: "<<iValue2<<endl;

    return 0;
}