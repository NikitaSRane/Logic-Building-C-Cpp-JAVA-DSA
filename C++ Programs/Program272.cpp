#include<iostream>
using namespace std;

int Addition(int iNo)
{
    static int iSum=0;
    static int iCnt=1;
    if(iCnt<=iNo)
    {
        iSum=iSum+iCnt;
        iCnt++; 
        Addition(iNo);

    }
    return iSum;
}

int main()
{
    int iValue=0;
    int iRet=0;

    cout<<"Enter number: "<<endl;
    cin>>iValue;
    iRet=Addition(iValue);

    cout<<"Addition is: "<<iRet;

    return 0;
}