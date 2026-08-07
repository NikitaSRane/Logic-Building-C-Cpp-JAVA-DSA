// Write a generic program which accept one value and one number from user. Print that value that number of times on screen.

#include<iostream>
using namespace std;


///////////////////////////////////////////////
//
// Function Name: Display
// Description: Display pattern
// Input:  Generic type,Integer
// Output: None
// Author: Nikita Sagar Rane
// Date:04/07/2024
//
///////////////////////////////////////////////


template <class T>
T Display(T Value, int No)
{
    int iCnt=0;

    for(iCnt=0; iCnt < No; iCnt++)
    {
        cout<<Value<<"\t";
    }
    cout<<endl;
}

int main()
{
    Display('M',5);
    Display(11,11);
    Display(20.9,7);

    return 0;
}

