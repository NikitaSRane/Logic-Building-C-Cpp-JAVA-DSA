// Write a program which accept number from user and return the count of digits in between 3 and 7.

#include<stdio.h>

//////////////////////////////////////////////////////////////////////
//
// Function Name: CountRange
// Description: Display frequency of digits which between 3 and 7
// Input: Integer
// Output: Integer
// Author: Nikita Sagar Rane
// Date: 14/05/2024
//
/////////////////////////////////////////////////////////////////////

int CountRange(int iNo)
{
    int iDigit=0;
    int iCount=0;

    while(iNo != 0 )
    {
        iDigit=iNo % 10;

        iNo=iNo / 10;

        if((iDigit>=3)&&(iDigit<=7))
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

    iRet=CountRange(iValue);
    printf("Count of digits in between 3 and 7 are:%d ",iRet);

    return 0;

}