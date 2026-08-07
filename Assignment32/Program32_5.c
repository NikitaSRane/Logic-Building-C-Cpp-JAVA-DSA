// Write a program which accept string from user and print below pattern.
/*

Input: marvellous

m       a       r       v       e       l       l       o       u       s
m       a       r       v       e       l       l       o       u       s
m       a       r       v       e       l       l       o       u       s
m       a       r       v       e       l       l       o       u       s
m       a       r       v       e       l       l       o       u       s
m       a       r       v       e       l       l       o       u       s
m       a       r       v       e       l       l       o       u       s
m       a       r       v       e       l       l       o       u       s
m       a       r       v       e       l       l       o       u       s
m       a       r       v       e       l       l       o       u       s


Input: PPA

Output: 

p
p       p
p       p       a

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

    if((*Start >='a')&&(*Start <='z'))
    {
        for(row=1; row<=iCount; row++)
        {

            for(col=1; col<=iCount; col++)
            {
                printf("%c\t",*Start);
                Start++;
            }
            printf("\n");
            Start=SStart;
        }
    }
    else if((*Start >='A')&&(*Start <='Z'))
    {
        for(row=1; row<=iCount; row++)
        {
            Start=SStart;

            for(col=1; col<=iCount; col++)
            {
                if(row >=col)
                {
                    printf("%c\t",*Start+32);
                    Start++;
                }
            }
            printf("\n");
        }
    }
}

int main()
{
    char Arr[30];

    printf("Enter string: \n");
    scanf("%[^'\n]s",Arr);

    Pattern(Arr);

    return 0;
}