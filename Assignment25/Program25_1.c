// Write a program which accept string from user and count number of capital characters.

#include<stdio.h>

///////////////////////////////////////////////
//
// Function Name: CountCapital
// Description: Return number of capital characters
// Input: Character
// Output: Integer
// Author: Nikita Sagar Rane
// Date: 31/05/2024
//
///////////////////////////////////////////////

int CountCapital(char *str)
{
    int iCount=0;

    while(*str != '\0')
    {
        if(( *str>='A')&&( *str <='Z'))
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

    iRet=CountCapital(arr);
    printf("Number of capital letters are: %d",iRet);

    return 0;
}