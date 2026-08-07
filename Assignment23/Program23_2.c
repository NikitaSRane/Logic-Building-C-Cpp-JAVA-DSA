// Accept character from user and check whether it is capital or not.

#include<stdio.h>
#include<stdbool.h>

///////////////////////////////////////////////
//
// Function Name: CheckCapital
// Description: Check alphabet is capital or not
// Input: Character
// Output: Boolean
// Author: Nikita Sagar Rane
// Date: 30/05/2024
//
///////////////////////////////////////////////

bool CheckCapital(char ch)
{
    if((ch >= 'A')&&(ch <= 'Z'))
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

    bRet=CheckCapital(cValue);

    if(bRet == true)
    {
        printf("It is Capital case character.");
    }
    else
    {
        printf("It is not Capital case character.");
    }

    return 0;
}