// Write a program which accept character from user.
// If character is small then display all the characters in reverse order till a.
// and if it capital then display all the characters from the input character till Z.
// In other cases return directly.


#include<stdio.h>

///////////////////////////////////////////////
//
// Function Name: Display
// Description: Display all characters 
// Input: Character
// Output: -
// Author: Nikita Sagar Rane
// Date: 30/05/2024
//
///////////////////////////////////////////////

void Display(char ch)
{

    if((ch >='A')&&(ch <= 'Z'))
    {
        while(ch <= 'Z')
        {
            printf("%c\t",ch);
            ch++;
        }
    }

    if((ch >='a')&&(ch <= 'z'))
    {
        while(ch >= 'a')
        {
            printf("%c\t",ch);
            ch--;
        }
    }
    else
    {
        return;
    }
}

int main()
{
    char cValue='\0';

    printf("Enter the character: ");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}
