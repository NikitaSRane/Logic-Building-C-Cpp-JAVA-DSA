#include<iostream>
using namespace std;

void Display(int iNo)
{
    static int iCnt=1;

    if(iCnt<=iNo)
    {
        cout<<iCnt<<endl;
        iCnt++;
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