// Write a program which accept string from user and print below pattern.
/*

Input: PPA

Output: P   P   A
        P   P   
        P      

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

    for(row=1; row<=iCount; row++)
    {
        Start=SStart;

        for(col=1; col<=iCount; col++)
        {
            if((row+col)<=( iCount+1)) //if(col>=row)
            {
                printf("%c\t",*Start);
                Start++;
            }
        }
        printf("\n");
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