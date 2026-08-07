// Accept amount in US $ and return its corresponding value in Indian currency.
// Consider 1 $ as 70 Rs.
// Time complexity- O(N*N)

#include<stdio.h>

////////////////////////////////////////////////////////////
//
// Function Name: DollerToINR
// Description: Display currency in INR.
// Input: Integer
// Output: Integer
// Author: Nikita Sagar Rane
// Date: 09/05/2024
//
///////////////////////////////////////////////////////////

int DollerToINR(int iNo)
{
    return iNo*70;
}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter value of US Doller: ");
    scanf("%d",&iValue);

    iRet=DollerToINR(iValue);
    printf("Value of INR is %d",iRet);

    return 0;
}