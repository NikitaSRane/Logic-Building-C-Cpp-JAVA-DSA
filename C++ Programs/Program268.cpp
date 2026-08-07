#include<iostream>
using namespace std;

void Display(int iNo)
{
    static int iCnt=iNo;
    if(iCnt>=1)
    {
        cout<<iCnt<<endl;
        iCnt--;
        Display(iNo);
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