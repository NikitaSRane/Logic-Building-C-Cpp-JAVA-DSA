// Write a recursive program which accept string from user and count number of characters.

//  Input:  Hello
//  Output: 5

#include<stdio.h>

///////////////////////////////////////////////
//
// Function Name: StrlenXR
// Description: Return length of character
// Input: Character
// Output: Integer
// Author: Nikita Sagar Rane
// Date: 20/06/2024
//
///////////////////////////////////////////////

int StrlenXI(char *Str)
{
    int iCnt=0;

    while( *Str != '\0')
    {
        iCnt++;
        Str++;
    }
    return iCnt;
}

int StrlenXR(char *Str)
{
    static int iCnt=0;

    if( *Str != '\0')
    {
        iCnt++;
        Str++;

        StrlenXR(Str);

    }
    return iCnt;
}

int main()
{
    char Arr[30];
    int iRet=0;

    printf("Enter string: \n");
    scanf("%[^'\n']s",Arr);

    iRet=StrlenXR(Arr);
    printf("Length of string is: %d",iRet);

    return 0;
}