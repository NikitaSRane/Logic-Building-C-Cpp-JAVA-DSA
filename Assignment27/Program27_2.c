// Write a program which accept string from user and accept one character. Return frequency of that character. 

#include<stdio.h>
#include<stdbool.h>

///////////////////////////////////////////////
//
// Function Name: CountChar
// Description: Return frequency of that character.
// Input: Character,Character
// Output: Integer
// Author: Nikita Sagar Rane
// Date: 01/06/2024
//
///////////////////////////////////////////////

int CountChar(char *str, char cValue)
{
    int iCount=0;

    while( *str != '\0')
    {
        if( *str == cValue)
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
    char ch='\0';
    int iRet=0;

    printf("Enter string: ");
    scanf("%[^'\n']s",arr);

    printf("Enter character:");
    scanf(" %c",&ch);

    iRet=CountChar(arr,ch);

    printf("Frequency of character is %d.",iRet);

    return 0;
}