// Write a program which accept string from user and convert it into upper case.

#include<stdio.h>

///////////////////////////////////////////////
//
// Function Name: StrUpperX
// Description: Convert string into upper case
// Input: Character
// Output: None
// Author: Nikita Sagar Rane
// Date: 01/06/2024
//
///////////////////////////////////////////////

void StrUpperX(char *str)
{
    int iCnt=0;
    char sletter='\0';
    char cletter='\0';

    while( *str != '\0')
    {
        if((*str >='a')&&(*str <='z'))
        {
            for(iCnt=1,sletter='a',cletter='A';iCnt<=26;iCnt++,sletter++,cletter++)
            {
                if(*str ==sletter)
                {
                    *str=cletter;
                }
            }
        }
        str++;
    }

}

int main()
{
    char arr[20];

    printf("Enter string: ");
    scanf("%[^'\n']s",arr);

    StrUpperX(arr);

    printf("Modified string is %s",arr);
    
    return 0;
}