// Write a program which accept string from user and convert it into lower case.

#include<stdio.h>

///////////////////////////////////////////////
//
// Function Name: StrLowerX
// Description: Convert string into lower case
// Input: Character
// Output: None
// Author: Nikita Sagar Rane
// Date: 01/06/2024
//
///////////////////////////////////////////////

void StrLowerX(char *str)
{
    int iCnt=0;
    char sletter='\0';
    char cletter='\0';

    while( *str != '\0')
    {
        if((*str >='A')&&(*str <='Z'))
        {
            for(iCnt=1,sletter='a',cletter='A';iCnt<=26;iCnt++,sletter++,cletter++)
            {
                if(*str ==cletter)
                {
                    *str=sletter;
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

    StrLowerX(arr);

    printf("Modified string is %s",arr);
    
    return 0;
}