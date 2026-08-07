// Write a recursive program which display below pattern.

// 5    4   3   2   1

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
    int iCnt=5;

    while(iCnt>=1)
    {
        printf("%d\t",iCnt);
        iCnt--;
    }
}

void DisplayR()
{
    static int iCnt=5;

    if(iCnt>=1)
    {
        printf("%d\t",iCnt);
        iCnt--;
        DisplayR();
    }
}

int main()
{
    DisplayR();
    return 0;
}