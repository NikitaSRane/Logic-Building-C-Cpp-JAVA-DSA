// Write a program which accept number from user and return multiplication of all digits.

#include<stdio.h>

//////////////////////////////////////////////////////////////////////
//
// Function Name: MultDigits
// Description: Display multiplication of all digits of number
// Input: Integer
// Output: Integer
// Author: Nikita Sagar Rane
// Date: 14/05/2024
//
/////////////////////////////////////////////////////////////////////

int MultDigits(int iNo)
{
    int iDigit=0;
    int iMult=1;

    while(iNo != 0 )
    {
        iDigit=iNo % 10;
        iMult=iMult*iDigit;
        iNo=iNo / 10;
    }
    return iMult;
}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter a number: ");
    scanf("%d",&iValue);

    iRet=MultDigits(iValue);
    printf("Multiplication of digits are:%d ",iRet);

    return 0;

}