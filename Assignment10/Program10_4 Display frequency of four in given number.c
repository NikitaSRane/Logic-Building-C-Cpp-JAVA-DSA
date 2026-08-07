// Write a program which accept number from user and count frequency of 4 in it.


#include<stdio.h>

//////////////////////////////////////////////////////////////////////
//
// Function Name: CountFour
// Description: Display frequency of four in given number
// Input: Integer
// Output: Integer
// Author: Nikita Sagar Rane
// Date: 13/05/2024
//
/////////////////////////////////////////////////////////////////////

int CountFour(int iNo)
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

        if(iDigit == 4)
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

    iRet=CountFour(iValue);
    printf("Frequency of four is :%d.",iRet);

    return 0;
}