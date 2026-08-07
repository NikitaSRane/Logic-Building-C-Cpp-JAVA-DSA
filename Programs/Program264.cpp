#include<iostream>
using namespace std;

void Display(int iNo)
{
    int iCnt=0;
    iCnt=1;
    while(iCnt<=iNo)
    {
        cout<<iCnt<<endl;
        iCnt++;
    }
}

int main()
{
    int iValue=0;

    cout<<"Enter number: "<<endl;
    cin>>iValue;
    Display(iValue);

    cout<<"End of application"<<endl;

    return 0;
}