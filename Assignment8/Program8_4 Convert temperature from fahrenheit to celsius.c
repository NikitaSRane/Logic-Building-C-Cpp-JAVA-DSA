// Write a program which accept temperature in Fahrenheit and convert it into celsius.
// 1 Celsisus =(Fahrenheit -32)*(5/9)

// Time Complexity- O(N)

#include<stdio.h>

//////////////////////////////////////////////////////////
//
// Function Name: FhtoCs
// Description: Convert temperature from fahrenheit to celsius.
// Input: Float
// Output: Double
// Author: Nikita Sagar Rane
// Date: 10/05/2024
//
//////////////////////////////////////////////////////////

double FhtoCs(float fTemp)
{
    double dTemp=0.0;

    dTemp=(fTemp-32)*(5.0/9.0);

    return dTemp;
}

int main()
{
    float fValue=0.0f;
    double dRet=0.0;

    printf("Enter the temperature in Fahrenheit: ");
    scanf("%f",&fValue);

    dRet=FhtoCs(fValue);
    printf("Temperature in Celsius is: %lf",dRet);

    return 0;
}