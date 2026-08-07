// Write a recursive program which accept number from user and return smallest digit.

//Input:    87983
//Output:   3

#include<stdio.h>

///////////////////////////////////////////////
//
// Function Name: MinimumR
// Description: Return smallest digit of number
// Input: Integer,Integer
// Output: Integer
// Author: Nikita Sagar Rane
// Date: 20/06/2024
//
///////////////////////////////////////////////


// Iterative apporach

int MinimumI(int iValue)
{
    int iDigit=0;
    int iMin=iValue % 10;

    while(iValue != 0)
    {
        iDigit=iValue % 10;

        if(iDigit < iMin)
        {
            iMin =iDigit;
        }
        iValue=iValue / 10;
    }
    return iMin;
}


// Recursive approach

int Minimum(int iValue, int iMin); // declaration

int MinimumR(int iValue)
{
    iValue=iValue /10;

    return Minimum(iValue, iValue % 10); // passing Number and last digit
}

int Minimum(int iValue, int iMin)
{
    int iDigit = 0;

    if(iValue == 0)
    {
        return iMin;
    }
    else
    {
        iDigit = iValue % 10;

        if (iDigit < iMin)
        {
            iMin = iDigit;
        }
        iValue=iValue / 10;

        Minimum(iValue, iMin);
    }

}


int main()
{
    int iNo=0;
    int iRet=0;

    printf("Enter number:\n");
    scanf("%d",&iNo);

    iRet=MinimumR(iNo);
    printf("Smallest digit is: %d",iRet);

    return 0;
}