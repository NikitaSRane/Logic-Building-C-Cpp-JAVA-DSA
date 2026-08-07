// Write a program which accept string from user and copy of that characters of that string into another string by converting all capital characters into small case.
// Input:   "Marvellous Multi"
// Output: "marvellous multi"

#include<stdio.h>

///////////////////////////////////////////////
//  
// Function Name: strCpySmall
// Description: Copy character contents of one string to another
// Input: CharacterArray, CharacterArray
// Output: None
// Author: Nikita Sagar Rane
// Date: 17/06/2024
//
///////////////////////////////////////////////

void strCpySmall(char *dest,char *src)
{
    while(*src != '\0')
    {
        if((*src >='A')&&(*src <='Z'))
        {
            *dest=*src+32;
            dest++; 
        }
        else
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

    strCpySmall(Brr,Arr);

    printf("Copied string is: %s",Brr);

    return 0;
}