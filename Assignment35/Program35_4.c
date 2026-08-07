//  Write a recursive program which accept number from user and return its factorial

//  Input:  5
//  Output: 120

#include<stdio.h>

///////////////////////////////////////////////
//
// Function Name: FactorialR
// Description: Return factorial of given number
// Input: Integer
// Output: Integer
// Author: Nikita Sagar Rane
// Date:20/06/2024
//
///////////////////////////////////////////////


int FactorialI(int iValue)
{
    int iCnt=1;
    int iFact=1;

    while(iCnt <=iValue)
    {
        iFact=iFact*iCnt;
        iCnt++;
    }
    return iFact;
}

int FactorialR(int iValue)
{
    static int iCnt=1;
    static int iFact=1;

    if(iCnt <=iValue)
    {
        iFact=iFact*iCnt;
        iCnt++;

        FactorialR(iValue);
    }
    return iFact;
}


int main()
{
    int iNo=0, iRet=0;

    printf("Enter number: \n");
    scanf("%d",&iNo);

    iRet=FactorialR(iNo);
    printf("Factorial is: %d",iRet);

    return 0;
}