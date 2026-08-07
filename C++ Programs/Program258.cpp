#include<iostream>
using namespace std;

//using while loop

void Display()
{
    int iCnt=0;
    iCnt=1;

    while(iCnt<=4)
    {
        cout<<"*"<<endl;
        iCnt++;
    }
}

int main()
{
    Display();
    return 0;
}