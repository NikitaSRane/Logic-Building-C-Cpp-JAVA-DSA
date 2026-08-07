// Write a recursive program which display below pattern.

// *    *   *   *   *

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

void DisplayIF()
{
    int iCnt=0;
    for(iCnt=1;iCnt<=5;iCnt++)
    {
        printf("*\t");
    }
}

void DisplayIW()
{
    int iCnt=1;

    while(iCnt<=5)
    {
        printf("*\t");
        iCnt++;
    }
}

void DisplayR()
{
    static int iCnt=1;

    if(iCnt<=5)
    {
        printf("*\t");
        iCnt++;
        DisplayR();
    }
}

int main()
{
    DisplayR();
    return 0;
}