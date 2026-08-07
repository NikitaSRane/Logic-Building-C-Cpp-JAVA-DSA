// Write a program which accept string from user and copy the contents of that string into another string.
// Input:   "Marvellous Multi OS"
// Output:  "Marvellous Multi OS"

#include<stdio.h>

///////////////////////////////////////////////
//
// Function Name: strCpy
// Description: Copy contents of one string to another
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
        *dest=*src;
        dest++;
        src++;
    }
    *dest='\0';

}


int main()
{
    char Arr[30];
    char Brr[30];

    printf("Enter string: \n");
    scanf("%[^'\n]s",Arr);

    strCpy(Brr,Arr);

    printf("Copied string is: %s",Brr);
    
    return 0;
}