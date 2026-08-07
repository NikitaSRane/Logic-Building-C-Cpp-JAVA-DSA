// Write a program which accept string from user and reverse the contents of that string by toggling the case.
// Input:   "aCBdef"
// Output: "FEDbcA"

#include<stdio.h>

///////////////////////////////////////////////
//  
// Function Name: strRevTogX
// Description: Copy string in another string in reverse order.
// Input: Character
// Output: None
// Author: Nikita Sagar Rane
// Date: 19/06/2024
//
///////////////////////////////////////////////
/*

void strTogX(char *src)
{
    while( *src != '\0')
    {
        if((*src >='a')&&(*src <='z'))
        {
            *src=*src-32;
        }
        else if((*src >='A')&&(*src <='Z'))
        {
            *src=*src+32;
        }
        src++;
    }
}
*/
void strRevTogX(char *src)
{
    char *start=src;
    char *end=src;
    char temp='\0';

    while( *src != '\0')
    {
        if((*src >='a')&&(*src <='z'))
        {
            *src=*src-32;
        }
        else if((*src >='A')&&(*src <='Z'))
        {
            *src=*src+32;
        }
        src++;
    }

    while(*end != '\0')
    {
        end++;
    }
    end--;

    while(start <= end)
    {
        temp=*start;
        *start=*end;
        *end=temp;

        start++;
        end--;
    }
}

int main()
{
    char Arr[30];

    printf("Enter string: \n");
    scanf("%[^'\n]s",Arr);

    strRevTogX(Arr);
    printf("Reverse string is: %s",Arr);


    return 0;
}