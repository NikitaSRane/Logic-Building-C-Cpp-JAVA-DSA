// Write a recursive program which display below pattern.

//  Input:  6
//  Outpu:  A   B   C   D   E   F

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
    char ch='A';
    while(iCnt <=iValue)
    {
        printf("%c\t",ch);
        iCnt++;
        ch++;
    }
}

void DisplayR(int iValue)
{
    static int iCnt=1;
    static char ch='A';

    if(iCnt <=iValue)
    {
        printf("%c\t",ch);
        iCnt++;
        ch++;
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