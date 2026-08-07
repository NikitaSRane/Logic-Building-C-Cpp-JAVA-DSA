// Write a program which accept number from user and return the count of even digits.

#include<stdio.h>

//////////////////////////////////////////////////////////////////////
//
// Function Name: CountEven
// Description: Display frequency of digits which are even.
// Input: Integer
// Output: Integer
// Author: Nikita Sagar Rane
// Date: 14/05/2024
//
/////////////////////////////////////////////////////////////////////

int CountEven(int iNo)
{
    int iDigit=0;
    int iCount=0;

    while(iNo != 0 )
    {
        iDigit=iNo % 10;

        iNo=iNo / 10;

        if(iDigit % 2 == 0)
        {
            iCount++;
        }
    }
    return iCount;

}

int main()
{
    int iValue=0;
    int iRet=0;


    printf("Enter a number: ");
    scanf("%d",&iValue);

    iRet=CountEven(iValue);
    printf("Count of even digits are:%d ",iRet);

    return 0;

}