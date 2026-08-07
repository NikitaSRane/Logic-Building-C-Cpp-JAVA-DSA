// Write a recursive program which display below pattern.

// A    B   C   D   E   F

#include<stdio.h>

///////////////////////////////////////////////
//
// Function Name: DisplayR
// Description: Display pattern
// Input: None
// Output: None
// Author: Nikita Sagar Rane
// Date:20/06/2024                                                                                                   
//
///////////////////////////////////////////////

void DisplayI()
{
    char ch='A';

    while(ch <= 'F')
    {
        printf("%c\t",ch);
        ch++;
    }
}

void DisplayR()
{
    static char ch='A';

    if(ch <= 'F')
    {
        printf("%c\t",ch);
        ch++;
        DisplayR();
    }
}

int main()
{
    DisplayR();
    return 0;
}