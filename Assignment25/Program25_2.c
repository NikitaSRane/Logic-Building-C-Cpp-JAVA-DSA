// Write a program which accept string from user and count number of small characters.

#include<stdio.h>

///////////////////////////////////////////////
//
// Function Name: CountSmall
// Description: Return number of small characters
// Input: Character
// Output: Integer
// Author: Nikita Sagar Rane
// Date: 31/05/2024
//
///////////////////////////////////////////////

int CountSmall(char *str)
{
    int iCount=0;

    while(*str != '\0')
    {
        if(( *str>='a')&&( *str <='z'))
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

    iRet=CountSmall(arr);
    printf("Number of small letters are: %d",iRet);

    return 0;
}