// Write a recursive program which accept string from user and count number of small characaters.

//Input: HellOWoRLD

//Output: 4

#include<stdio.h>

///////////////////////////////////////////////
//
// Function Name: CountSmallR
// Description: Return number of small letters
// Input: Character
// Output: Integer
// Author: Nikita Sagar Rane
// Date:20/06/2024
//
///////////////////////////////////////////////

int CountSmallI(char *Str)
{
    int iCount=0;

    while(*Str != '\0')
    {
        if((*Str >='a')&&(*Str <='z'))
        {
            iCount++;
        }
        Str++;
    }
    return iCount;
}

int CountSmallR(char *Str)
{
    static int iCount=0;

    if(*Str != '\0')
    {
        if((*Str >='a')&&(*Str <='z'))
        {
            iCount++;
        }
        Str++;
        CountSmallR(Str);
    }
    return iCount;
}

int main()
{
    char Arr[30];
    int iRet=0;

    printf("Enter string: \n");
    scanf("%[^\n]s",Arr);

    iRet=CountSmallR(Arr);
    printf("Number of small letters are: %d",iRet);

    return 0;
}