// Write a program which accept number from user and count frequency of such a digits which are less than 6.


#include<stdio.h>

//////////////////////////////////////////////////////////////////////
//
// Function Name: Count
// Description: Display frequency of digits which are less than 6.
// Input: Integer
// Output: Integer
// Author: Nikita Sagar Rane
// Date: 13/05/2024
//
/////////////////////////////////////////////////////////////////////

int Count(int iNo)
{
    int iDigit=0;
    int iCount=0;

    if(iNo <0)
    {
        iNo=-iNo;
    }

    while(iNo !=0 )
    {
        iDigit=iNo % 10;
        iNo=iNo / 10;

        if(iDigit < 6)
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

    printf("Enter number: ");
    scanf("%d",&iValue);

    iRet=Count(iValue);
    printf("Frequency of digit which is less than 6 is :%d.",iRet);

    return 0;
}