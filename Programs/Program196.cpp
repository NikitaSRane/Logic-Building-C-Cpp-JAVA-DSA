#include<iostream>
using namespace std;

int SumFactor(int iNo)
{
    int iCnt=0;
    int iSum=0;

    for(iCnt=1;iCnt<iNo;iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iSum=iSum+iCnt;
        }
    }
    return iSum;
}

int main()
{
    int iValue=0;
    int iRet=0;

    cout<<"Enter number: "<<endl;
    cin>>iValue;

    iRet=SumFactor(iValue);
    cout<<"Sum of factors is :"<<iRet;

    return 0;
}