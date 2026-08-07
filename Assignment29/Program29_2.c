// Write a program which accept string from user and copy of that characters of that string into another string by removing white space.
// Input:   "Marvellous Multi OS"
// Output: "MarvellousMultiOS"

#include<stdio.h>

///////////////////////////////////////////////
//  
// Function Name: strCpy
// Description: Copy character contents of one string to another excluding space
// Input: CharacterArray, CharacterArray
// Output: None
// Author: Nikita Sagar Rane
// Date: 17/06/2024
//
///////////////////////////////////////////////

void strCpy(char *dest,char *src)
{
    while(*src != '\0')
    {
        if(*src != ' ')
        {
            *dest=*src;
            dest++; 
        }
        src++;
    }
    *dest='\0';
}


int main()
{
    char Arr[30];
    char Brr[30];

    printf("Enter first string: \n");
    scanf("%[^'\n]s",Arr);

    strCpy(Brr,Arr);

    printf("Copied string is: %s",Brr);

    return 0;
}