// Write a program which accept string from user and print below pattern.
/*

Input: PPA

Output: P   P   A
        P   P   A
        P   P   A

*/

#include<stdio.h>

///////////////////////////////////////////////
//
// Function Name: Pattern
// Description: Display pattern
// Input: Character
// Output: None
// Author: Nikita Sagar Rane
// Date: 19/06/2024
//
///////////////////////////////////////////////
/*
void Pattern(char *Str)
{
    int iCount=0;
    char *Start=Str;
    char *SStart=Str;

    while( *Str != '\0')
    {
        iCount++;
        Str++;
    }

    int row=0;
    int col=0;

    for(row=1; row<=iCount; row++)
    {
        for(col=1; col<=iCount; col++)
        {
            printf("%c\t",*Start);
            Start++;
        }
        Start=SStart;
        printf("\n");
    }
}
    */

int strlen(char *str)
{
    int iCount=0;

    while(*str != '\0')
    {
        iCount++;
        str++;
    }
    return iCount;
}

void Display(char *str)
{
    int iRet=0;
    int iCnt1=0, iCnt2=0;
    iRet=strlen(str);

    for(iCnt1=0; iCnt1 < iRet ; iCnt1++)
    {
        for(iCnt2=0;iCnt2< iRet; iCnt2++)
        {
            printf("%c\t",str[iCnt2]);
        }
        printf("\n");
    }

}

int main()
{
    char Arr[30];

    printf("Enter string:");
    scanf("%[^'\n]s",Arr);

    //Pattern(Arr);
    Display(Arr);
    return 0;
}