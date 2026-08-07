// Write a program which accept 2 strings from user and concat second string after first string.
// Input:   "Marvellous Multi OS"
//          "PUNE"
// Output: "Marvellous Multi OS PUNE"

#include<stdio.h>

///////////////////////////////////////////////
//  
// Function Name: strCat
// Description: Concat second string to first string.
// Input: CharacterArray, CharacterArray
// Output: None
// Author: Nikita Sagar Rane
// Date: 19/06/2024
//
///////////////////////////////////////////////

void strCat(char *src,char *dest)
{
    while(*src !='\0')
    {
        src++;
    }
    *src=' ';
    src++;

    while(*dest != '\0')
    {
        *src=*dest;
        dest++; 
        src++;
    }
    *src='\0';
}


int main()
{
    char Arr[30];
    char Brr[30];

    printf("Enter first string: \n");
    scanf("%[^'\n]s",Arr);
    printf("Enter second string: \n");
    scanf(" %[^'\n]s",Brr);
    strCat(Arr,Brr);

    printf("Copied string is: %s",Arr);

    return 0;
}