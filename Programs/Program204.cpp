#include<iostream>
using namespace std;

int SumDifference(int iNo)
{
    int iDigit=0, iSumE=0, iSumO=0, iDiff=0;

    while(iNo != 0)
    {
        iDigit= iNo % 10;

        if((iDigit % 2)==0)
        {
            iSumE=iSumE+iDigit;
        }
        else
        {
            iSumO=iSumO+iDigit;
        }

        iNo=iNo / 10;
    }
    iDiff=iSumE-iSumO;
    return iDiff;
}

int main()
{
    int iValue=0;
    int iRet=0;

    cout<< "Enter number: "<<endl;
    cin>>iValue;

    iRet=SumDifference(iValue);
    cout<<"Summation of differences in odd digits and even digits are:"<<iRet<<endl;

    return 0;
}