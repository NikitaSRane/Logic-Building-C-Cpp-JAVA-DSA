// Write a recursive program which accept number from user and return its product of digits.

//Input:    523
//Output:   30

#include<stdio.h>

///////////////////////////////////////////////
//
// Function Name: ProductR
// Description: Return the product of digits of number
// Input: Integer
// Output: Integer
// Author: Nikita Sagar Rane
// Date:20/06/2024
//
///////////////////////////////////////////////

int ProductI(int iValue)
{
    int iDigit=0;
    int iMult=0;
    int iProd=1;

    while(iValue != 0)
    {
        iDigit= iValue % 10;
        iMult=iProd*iDigit;
        iProd=iMult;
        iValue=iValue /10;
    }
    return iProd;
}

int ProductR(int iValue)
{
    int iDigit=0;
    int iMult=0;
    static int iProd=1;

    if(iValue != 0)
    {
        iDigit= iValue % 10;
        iMult=iProd*iDigit;
        iProd=iMult;
        iValue=iValue /10;

        ProductR(iValue);
    }
    return iProd;
}

int main()
{
    int iNo=0,iRet=0;

    printf("Enter number: \n");
    scanf("%d",&iNo);

    iRet=ProductR(iNo);
    printf("Product of digits is: %d",iRet);

    return 0;
}