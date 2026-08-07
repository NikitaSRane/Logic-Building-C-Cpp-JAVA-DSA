// Write a recursive program which display below pattern.

// a    b   c   d   e   f

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
    char ch='a';

    while(ch <= 'f')
    {
        printf("%c\t",ch);
        ch++;
    }
}

void DisplayR()
{
    static char ch='a';

    if(ch <= 'f')
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