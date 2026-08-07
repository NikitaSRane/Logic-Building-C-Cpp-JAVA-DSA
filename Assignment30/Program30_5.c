// Accept string from user and check whether the string is palindrome or not without checking its case.

//Input:    "1abcDCbA1"
//Output:   True

#include<stdio.h>
#include<stdbool.h>

///////////////////////////////////////////////
//
// Function Name: StrPalindrome
// Description: check whether the string is palindrome or not without checking its case.
// Input: Character
// Output: Boolean
// Author: Nikita Sagar Rane
// Date:19/06/2024
//
///////////////////////////////////////////////

bool StrPalindrome(char *src)
{
    char *start=src;
    char *end=src;
    char temp;

    while(*end != '\0')
    {
        end++;
    }
    end--;

    while(start < end)
    {
        if(*start != *end)
        {
            return false;
        }

        start++;
        end--;
    }
    return true;
}

int main()
{
    char Arr[30];
    bool bRet=false;

    printf("Enter string: \n");
    scanf("%[^\n]s",Arr);

    bRet=StrPalindrome(Arr);

    if(bRet == true)
    {
        printf("String is palindrome");
    }
    else
    {
        printf("String is not palindrome");
    }
    
    return 0;
}