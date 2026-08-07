// Write a program which accept area in square feet and convert it into square meter.
// 1 square feet= 0.0929 square meter

// Time Complexity- O(N)

#include<stdio.h>

//////////////////////////////////////////////////////////
//
// Function Name: SquareMeter
// Description: Convert area from Square feet to Square meter.
// Input: Integer
// Output: Double
// Author: Nikita Sagar Rane
// Date: 10/05/2024
//
//////////////////////////////////////////////////////////

double SquareMeter(int iSFeet)
{
    double dSMeter=0.0;

    dSMeter=0.0929*iSFeet;

    return dSMeter;
}

int main()
{
    int iValue=0;
    double dRet=0.0;

    printf("Enter area in square feet: ");
    scanf("%d",&iValue);

    dRet=SquareMeter(iValue);
    printf("Area in square meter is %lf",dRet);
    return 0;
}