#include<iostream>
using namespace std;

int SumDigits(int iNo)
{
    int iDigit=0;
    static int iSum=0;

    if(iNo != 0)
    {
        iDigit=iNo % 10;
        iSum=iSum+iDigit;
        SumDigits(iNo / 10);
    }
    return iSum;
}

int main()
{
    int iValue=0;
    int iRet=0;

    cout<<"Enter number: "<<endl;
    cin>>iValue;
    iRet=SumDigits(iValue);
    cout<<"sum  of number is: "<<iRet<<endl;
    return 0;
}