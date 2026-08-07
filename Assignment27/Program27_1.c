// Write a program which accept string from user and accept one character. Check whether that character is present in string or not.

#include<stdio.h>
#include<stdbool.h>

///////////////////////////////////////////////
//
// Function Name: CheckChar
// Description: Check character is present or not in string.
// Input: Character,Character
// Output: Boolean
// Author: Nikita Sagar Rane
// Date: 01/06/2024
//
///////////////////////////////////////////////

bool CheckChar(char *str, char cValue)
{
    while( *str != '\0')
    {
        if( *str == cValue)
        {
            return true;
        }
        str++;
    }
    return false;

}


int main()
{
    char arr[20];
    char ch='\0';
    bool bRet=false;

    printf("Enter string: ");
    scanf("%[^'\n']s",arr);

    printf("Enter character:");
    scanf(" %c",&ch);

    bRet=CheckChar(arr,ch);

    if(bRet== true)
    {
        printf("Character is present.");
    }
    else
    {
        printf("Character is not present.");
    }

    return 0;
}