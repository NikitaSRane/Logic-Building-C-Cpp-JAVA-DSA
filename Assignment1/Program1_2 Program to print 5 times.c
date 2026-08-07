// Program to print 5 times "Marvellous" on screen.

#include<stdio.h>

////////////////////////////////////////////////////////////
//
// Function Name: Display
// Description: Display a static value 5 times.
// Input: -
// Output: -
// Author: Nikita Sagar Rane
// Date: 09/05/2024
//
///////////////////////////////////////////////////////////

void Display()
{
    int iCnt=0;

    for(iCnt=1;iCnt<=5;iCnt++)
    {
        printf("Marvellous \n");
    }
}

int main()
{
    Display();
    return 0;
}