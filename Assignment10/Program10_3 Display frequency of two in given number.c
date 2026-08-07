// Write a program which accept number from user and count frequency of 2 in it.


#include<stdio.h>

//////////////////////////////////////////////////////////////////////
//
// Function Name: CountTwo
// Description: Display frequency of two in given number
// Input: Integer
// Output: Integer
// Author: Nikita Sagar Rane
// Date: 13/05/2024
//
/////////////////////////////////////////////////////////////////////

int CountTwo(int iNo)
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

        if(iDigit == 2)
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

    iRet=CountTwo(iValue);
    printf("Frequency of two is :%d.",iRet);

    return 0;
}