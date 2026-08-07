// Write a program which accept width and height of rectangle from user and calculate its ara.
//Area=width*height

// Time complexity-O(N)

#include<stdio.h>

///////////////////////////////////////////////
//
// Function Name: RectArea
// Description: Calculate area of rectangle.
// Input: Float,Float
// Output: Double
// Author: Nikita Sagar Rane
// Date: 10/05/2024
//
/////////////////////////////////////////////////

double RectArea(float fWidth, float fHeight)
{
    double dArea=0.0;
    dArea=fWidth*fHeight;

    return dArea;
}

int main()
{
    float fValue1=0.0f;
    float fValue2=0.0f;
    double dRet=0.0;

    printf("Enter width: ");
    scanf("%f",&fValue1);

    printf("Enter height: ");
    scanf("%f",&fValue2);

    dRet=RectArea(fValue1,fValue2);
    printf("Area of rectangle is : %lf",dRet);

    return 0;
}