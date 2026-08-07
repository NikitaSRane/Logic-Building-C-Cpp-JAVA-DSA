// Write a recursive program which accept string from user and count white spaces

#include<stdio.h>

///////////////////////////////////////////////
//
// Function Name: CountSpaceR
// Description: Return number of whitespaces
// Input: Character
// Output: Integer
// Author: Nikita Sagar Rane
// Date:20/06/2024
//
///////////////////////////////////////////////

int CountSpaceI(char *Str)
{
    int iCnt=0;

    while(*Str != '\0')
    {
        if((*Str == ' ')||(*Str == '\t'))
        {
            iCnt++;
        }
        Str++;
    }
    return iCnt;
}

int CountSpaceR(char *Str)
{
    static int iCnt=0;

    if(*Str != '\0')
    {
        if((*Str == ' ')||(*Str == '\t'))
        {
            iCnt++;
        }
        Str++;

        CountSpaceR(Str);
    }
    return iCnt;
}

int main()
{
    char Arr[30];
    int iRet=0;

    printf("Enter string: \n");
    scanf("%[^'\n']s", Arr);

    iRet=CountSpaceR(Arr);

    printf("Number of white spaces are: %d",iRet);

    return 0;
}