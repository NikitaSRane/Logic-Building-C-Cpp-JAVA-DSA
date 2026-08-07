// Accept character from user and check whether it is alphabet or not.

#include<stdio.h>
#include<stdbool.h>

///////////////////////////////////////////////
//
// Function Name: CheckAlpha
// Description: Check alphabet or not
// Input: Character
// Output: Boolean
// Author: Nikita Sagar Rane
// Date: 30/05/2024
//
///////////////////////////////////////////////

bool CheckAlpha(char ch)
{
    if(((ch >= 'A')&&(ch <= 'Z'))||((ch >= 'a')&&(ch <= 'z')))
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

    bRet=CheckAlpha(cValue);

    if(bRet == true)
    {
        printf("It is alphabet.");
    }
    else
    {
        printf("It is not alphabet.");
    }

    return 0;
}