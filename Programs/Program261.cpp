#include<iostream>
using namespace std;

// Approach 3: using recursion

void Display()
{
    static int iCnt=1;

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