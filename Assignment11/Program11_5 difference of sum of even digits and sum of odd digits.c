// Write a program which accept number from user and return difference between summation of even digits and summation of odd digits.

#include<stdio.h>

//////////////////////////////////////////////////////////////////////
//
// Function Name: CountDiff
// Description: Display difference of sum of even digits and sum of odd digits.
// Input: Integer
// Output: Integer
// Author: Nikita Sagar Rane
// Date: 14/05/2024
//
/////////////////////////////////////////////////////////////////////

int CountDiff(int iNo)
{
    int iDigit=0;
    int iSum1=0, iSum2=0;

    while(iNo != 0 )
    {
        iDigit=iNo % 10;
        iNo=iNo / 10;

        if(iDigit % 2 == 0 )
        {
            iSum1=iSum1+iDigit;
        }
        if(iDigit % 2 != 0 )
        {
            iSum2=iSum2+iDigit;
        }
    }
    return iSum1-iSum2;
}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter a number: ");
    scanf("%d",&iValue);

    iRet=CountDiff(iValue);
    printf("Difference between sum of even digits and sum of odd digits are :%d ",iRet);

    return 0;

}