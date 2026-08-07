// Write a recursive program which display below pattern.

//  Input:  5
//  Outpu:  1   2   3   4   5

#include<stdio.h>

///////////////////////////////////////////////
//
// Function Name: DisplayR
// Description: Display pattern
// Input: Integer
// Output: None
// Author: Nikita Sagar Rane
// Date: 20/06/2024
//
///////////////////////////////////////////////

void DisplayW(int iValue)
{
    int iCnt=1;

    while(iCnt <=iValue)
    {
        printf("%d\t",iCnt);
        iCnt++;
    }
}

void DisplayR(int iValue)
{
    static int iCnt=1;

    if(iCnt<=iValue)
    {
        printf("%d\t",iCnt);
        iCnt++;
        DisplayR(iValue);
    }
}

int main()
{
    int iNo=0;

    printf("Enter number: \n");
    scanf("%d",&iNo);

    DisplayR(iNo);

    return 0;
}