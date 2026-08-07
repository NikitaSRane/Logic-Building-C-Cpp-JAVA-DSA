// Accept character from user and check whether it is small case or not.

#include<stdio.h>
#include<stdbool.h>

///////////////////////////////////////////////
//
// Function Name: CheckSmall
// Description: Check alphabet is small case or not
// Input: Character
// Output: Boolean
// Author: Nikita Sagar Rane
// Date: 30/05/2024
//
///////////////////////////////////////////////

bool CheckSmall(char ch)
{
    if((ch >= 'a')&&(ch <= 'z'))
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

    bRet=CheckSmall(cValue);

    if(bRet == true)
    {
        printf("It is small case character.");
    }
    else
    {
        printf("It is not small case character.");
    }

    return 0;
}