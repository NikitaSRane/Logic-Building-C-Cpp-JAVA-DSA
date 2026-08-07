// Accept character from user and display its ASCII value in decimal, octal and hexadecimal format.

#include<stdio.h>

///////////////////////////////////////////////
//
// Function Name: Display
// Description: Display ASCII value in different formats.
// Input: Character
// Output: -
// Author: Nikita Sagar Rane
// Date: 30/05/2024
//
///////////////////////////////////////////////

void Display(char ch)
{
   printf("Decimal      : %d\n",ch);
   printf("Octal        : 0%o\n",ch);
   printf("Hexadecimal  : 0X%x\n",ch);
}

int main()
{
    char cValue='\0';

    printf("Enter character: ");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}