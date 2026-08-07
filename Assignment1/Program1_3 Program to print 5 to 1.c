// Program to print 5 to 1 numbers on screen

#include<stdio.h>

////////////////////////////////////////////////////////////
//
// Function Name: Display
// Description: Display reverse number series.
// Input: -
// Output: -
// Author: Nikita Sagar Rane
// Date: 09/05/2024
//
///////////////////////////////////////////////////////////

void Display()
{
    int iCnt=0;
    iCnt=5;

    while(iCnt>=1)
    {
        printf("%d\n",iCnt);
        iCnt--;
    }

}

int main()
{
    Display();
    
    return 0;
}