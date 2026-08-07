// Write a program which accept radius of circle from user and calculate its area.
// Consider value of PI as 3.14
// Area=PI *Radius*Radius

//Time Complexity-O(N)

#include<stdio.h>

///////////////////////////////////////////////
//
// Function Name: CircleArea
// Description: Calculate area of circle.
// Input: Float
// Output: Double
// Author: Nikita Sagar Rane
// Date: 10/05/2024
//
/////////////////////////////////////////////////

double CircleArea(float fRadius )
{
    double dArea=0.0;

    dArea=3.14*fRadius*fRadius;

    return dArea;
}

int main()
{
    float fValue=0.0f;
    double dRet=0.0;

    printf("Enter radius: ");
    scanf("%f",&fValue);

    dRet=CircleArea(fValue);
    printf("Area of circle is :%lf.",dRet);

    return 0;

}