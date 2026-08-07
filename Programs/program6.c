/*

step1: understand the problem statement
step2: write the algorithm
step3: decide the programming language
step4: write the program
step5: test the program

*/
#include<stdio.h>

//////////////////////////////////////////////////////
//
// Function Name: Addition
// Description: It is used to perform addition of two floats
// Input: Float,Float
// Output:Float
// Author:  Nikita sagar Rane
// Date: 15/04/2024
//
///////////////////////////////////////////////////////

float Addition(float fNo1,float fNo2)
{
    float fAns=0.0;
    fAns=fNo1+fNo2;
    return fAns;
}
//End of Addition function

/////////////////////////////////////////////////////////
// Function name:Main function
// Description:Entry point function
/////////////////////////////////////////////////////////

int main()
{
    float fValue1=0.0,fValue2=0.0;
    float fResult=0.0;
    
    printf("Enter first number: \n");
    scanf("%f",&fValue1);
    printf("Enter second number: \n");
    scanf("%f",&fValue2);
    
    fResult=Addition(fValue1,fValue2);
    
    printf("Addition is : %f",fResult);
    return 0;
}
//End of main function