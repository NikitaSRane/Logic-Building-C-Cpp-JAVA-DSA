// Write a recursive program which accept number from user and return largest digit.

//Input:    87983
//Output:   9

#include<stdio.h>

///////////////////////////////////////////////
//
// Function Name: MaximumR
// Description: Return largest digit of number
// Input: Integer,Integer
// Output: Integer
// Author: Nikita Sagar Rane
// Date: 20/06/2024
//
///////////////////////////////////////////////


// Iterative apporach

int MaximumI(int iValue)
{
    int iDigit=0;
    int iMax=iValue % 10;

    while(iValue != 0)
    {
        iDigit=iValue % 10;

        if(iDigit > iMax)
        {
            iMax =iDigit;
        }
        iValue=iValue / 10;
    }
    return iMax;
}


// Recursive approach

int Maximum(int iValue, int iMax); // declaration

int MaximumR(int iValue)
{
    iValue=iValue /10;

    return Maximum(iValue, iValue % 10); // passing Number and last digit
}

int Maximum(int iValue, int iMax)
{
    int iDigit = 0;

    if(iValue == 0)
    {
        return iMax;
    }
    else
    {
        iDigit = iValue % 10;

        if (iDigit > iMax)
        {
            iMax = iDigit;
        }
        iValue=iValue / 10;

        Maximum(iValue, iMax);
    }

}


int main()
{
    int iNo=0;
    int iRet=0;

    printf("Enter number:\n");
    scanf("%d",&iNo);

    iRet=MaximumR(iNo);
    printf("Largest digit is: %d",iRet);

    return 0;
}