// Write a program which accept string from user and display only digits from that string.

#include<stdio.h>

///////////////////////////////////////////////
//
// Function Name: DisplayDigit
// Description: Display only digits in string
// Input: Character
// Output: -
// Author: Nikita Sagar Rane
// Date: 31/05/2024
//
///////////////////////////////////////////////

void DisplayDigit(char *str)
{
    int iCnt=0;

    char ch[]={'0','1','2','3','4','5','6','7','8','9','\0'};

    while(*str != '\0')
    {
        for(iCnt=0;iCnt<sizeof(ch)-1;iCnt++)
        {
            if( *str == ch[iCnt])
            {
                printf("%c",*str);
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

    DisplayDigit(arr);

    return 0;
}