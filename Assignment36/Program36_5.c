// Write a recursive program which accept number from user and return its reverse number.

//Input:  523
//Output: 325
#include<stdio.h>

///////////////////////////////////////////////
//
// Function Name: ReverseR
// Description: Return number in reverse order
// Input: Integer
// Output: Integer
// Author: Nikita Sagar Rane
// Date:20/06/2024
//
///////////////////////////////////////////////

int ReverseI(int iValue)
{
    int iRev=0;
    int iDigit=0;

    while(iValue != 0)
    {
        iDigit= iValue % 10;
        iRev= (iRev * 10) + iDigit;
        iValue=iValue / 10;
    }
    return iRev;
}

int ReverseR(int iValue)
{
    static int iRev=0;
    int iDigit=0;

    if(iValue != 0)
    {
        iDigit= iValue % 10;
        iRev= (iRev * 10) + iDigit;
        iValue=iValue / 10;

        ReverseR(iValue);
    }
    return iRev;
}

int main()
{
    int iNo=0;
    int iRet=0;

    printf("Enter number: \n");
    scanf("%d",&iNo);

    iRet=ReverseR(iNo);
    printf("Reverse number is: %d",iRet);
    
    return 0;
}