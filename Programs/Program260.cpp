#include<iostream>
using namespace std;

// Approach 3: using recursion

void Display()
{
    auto iCnt=0;
    iCnt=1;

    if(iCnt<=4)
    {
        cout<<"*"<<endl;
        iCnt++;
        Display();
    }
}

int main()
{
    Display();
    return 0;
}