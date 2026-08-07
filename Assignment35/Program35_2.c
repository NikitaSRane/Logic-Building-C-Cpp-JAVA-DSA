// Write a recursive program which accept number from user and return summation of its digits.
//  Input:  879
//  Output: 24  

#include<stdio.h>

///////////////////////////////////////////////
//
// Function Name: SumDigitR
// Description: Return addition of digits of number
// Input: Integer
// Output: Integer
// Author: Nikita Sagar Rane
// Date:20/06/2024
//
///////////////////////////////////////////////


int SumDigitI(int iValue)
{
    int iDigit=0;
    int iSum=0;

    while(iValue != 0)
    {
        iDigit=iValue % 10;
        iSum=iSum+iDigit;
        iValue=iValue / 10;
    }
    return iSum;
}

int SumDigitR(int iValue)
{
    int iDigit=0;
    static int iSum=0;

    if(iValue != 0)
    {
        iDigit=iValue % 10;
        iSum=iSum+iDigit;
        iValue=iValue / 10;

        SumDigitR(iValue);
    }
    return iSum;
}

int main()
{
    int iNo=0, iRet=0;

    printf("Enter number:\n");
    scanf("%d",&iNo);

    iRet=SumDigitR(iNo);
    printf("Sum of digits is: %d",iRet);

    return 0;
}