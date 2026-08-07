// Write a program which accept string from user and return difference between frequency of capital characters and frequency of small characaters.

#include<stdio.h>

///////////////////////////////////////////////
//
// Function Name: Difference
// Description: return difference between frequency of capital characters and frequency of small characters
// Input: Character
// Output: Integer
// Author: Nikita Sagar Rane
// Date: 31/05/2024
//
///////////////////////////////////////////////

int Difference(char *str)
{
    int iCount1=0, iCount2=0;

    while(*str != '\0')
    {
        if(( *str>='A')&&( *str <='Z'))
        {
            iCount1++;
        }
        if(( *str>='a')&&( *str <='z'))
        {
            iCount2++;
        }
        str++;
    }
    return iCount2-iCount1;
}

int main()
{
    char arr[20];
    int iRet=0;

    printf("Enter string: ");
    scanf("%[^'\n']s",arr);

    iRet=Difference(arr);
    printf("Difference between frequency of capital characters and frequency of small letters are: %d",iRet);

    return 0;
}