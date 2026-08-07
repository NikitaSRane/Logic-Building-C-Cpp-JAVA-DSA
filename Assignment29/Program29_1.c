// Write a program which accept string from user and copy of that characters of that string into another string in reverse order.
// Input:   "Marvellous Multi"
// Output: "itluM suollevraM"

#include<stdio.h>

///////////////////////////////////////////////
//  
// Function Name: strCpyReverse
// Description: Copy string in another string in reverse order.
// Input: CharacterArray, CharacterArray
// Output: None
// Author: Nikita Sagar Rane
// Date: 19/06/2024
//
///////////////////////////////////////////////

void strCpyReverse(char *dest,char *src)
{
    char *start= src;
    char *end=src;

    while(*end != '\0')
    {
        end++;
    }
    end--;

    while(end >=start)
    {
        *dest=*end;
        dest++;
        end--;

    }
    *dest='\0';
}

int main()
{
    char Arr[30];
    char Brr[30];

    printf("Enter string: \n");
    scanf("%[^'\n]s",Arr);

    strCpyReverse(Brr,Arr);
    printf("Reverse string is: %s",Brr);

    return 0;
}