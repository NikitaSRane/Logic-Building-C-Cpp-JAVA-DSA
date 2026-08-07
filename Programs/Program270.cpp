#include<iostream>
using namespace std;

int Addition(int iNo)
{
    int iSum=0;
    int iCnt=1;
    while(iCnt<=iNo)
    {
        iSum=iSum+iCnt;
       iCnt++; 
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