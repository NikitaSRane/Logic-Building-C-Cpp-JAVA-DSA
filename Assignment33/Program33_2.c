// Write a recursive program which display below pattern.

// 1    2   3   4   5

#include<stdio.h>

///////////////////////////////////////////////
//
// Function Name: DisplayR
// Description: Display pattern
// Input: None
// Output: None
// Author: Nikita Sagar Rane
// Date:20/06/2024                                                                                                   
//
///////////////////////////////////////////////

void DisplayI()
{
    int iCnt=1;

    while(iCnt<=5)
    {
        printf("%d\t",iCnt);
        iCnt++;
    }
}

void DisplayR()
{
    static int iCnt=1;

    if(iCnt<=5)
    {
        printf("%d\t",iCnt);
        iCnt++;
        DisplayR();
    }
}

int main()
{
    DisplayR();
    return 0;
}