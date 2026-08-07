// Write a program which accept character from user and check whether it is special symbol or not

#include<stdio.h>
#include<stdbool.h>

///////////////////////////////////////////////
//
// Function Name: CheckSpecial
// Description: Display all characters 
// Input: Character
// Output: Boolean
// Author: Nikita Sagar Rane
// Date: 30/05/2024
//
///////////////////////////////////////////////

bool Display(char ch)
{
    switch(ch)
    {
        case '!':
        case '@':
        case '#':
        case '$':
        case '%':
        case '^':
        case '&':
        case '*':
            return true;
        break;

        default:
            return false;
    }


}

int main()
{
    char cValue='\0';
    bool bRet=false;

    printf("Enter the character: ");
    scanf("%c",&cValue);

    bRet=Display(cValue);

    if(bRet == true)
    {
        printf("It is special symbol.");
    }
    else
    {
        printf("It is not special symbol.");
    }
    return 0;
}
