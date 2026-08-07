// Accept character from user and check whether it is digit or not.

#include<stdio.h>
#include<stdbool.h>

///////////////////////////////////////////////
//
// Function Name: CheckDigit
// Description: Check character is digit or not
// Input: Character
// Output: Boolean
// Author: Nikita Sagar Rane
// Date: 30/05/2024
//
///////////////////////////////////////////////

bool CheckDigit(char ch)
{
    if((ch >='0')&&(ch <='9'))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    char cValue='\0';
    bool bRet=false;

    printf("Enter the character: ");
    scanf("%c",&cValue);

    bRet=CheckDigit(cValue);

    if(bRet == true)
    {
        printf("It is digit.");
    }
    else
    {
        printf("It is not digit.");
    }

    return 0;
}