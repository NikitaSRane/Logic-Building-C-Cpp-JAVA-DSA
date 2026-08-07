// Write a program which accept string from user and count number of white spaces.

#include<stdio.h>

///////////////////////////////////////////////
//
// Function Name: CountWhite
// Description: Return white spaces in between string.
// Input: Character
// Output: Integer
// Author: Nikita Sagar Rane
// Date: 01/06/2024
//
///////////////////////////////////////////////

int CountWhite(char *str)
{
    int iCount=0;

    while(*str !='\0')
    {
        if(*str == ' ')
        {
            iCount++;
        }
        str++;
    }
    return iCount;
}

int main()
{
    char arr[20];
    int iRet=0;

    printf("Enter string: ");
    scanf("%[^'\n']s",arr);

    iRet=CountWhite(arr);
    printf("Number of white spaces are: %d",iRet);

    return 0;
}