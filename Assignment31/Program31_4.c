// Write a program which accept string from user and copy the contents into another string by removing extra white spaces.
// Input:    "Marvel    lous Multi OS"
// Output:  "Marvellous Multi OS"

#include<stdio.h>
#include<stdbool.h>

///////////////////////////////////////////////
//
// Function Name: StrCpyX
// Description: count number of words from string  
// Input: Character
// Output: Integer
// Author: Nikita Sagar Rane
// Date:09/07/2024
//
///////////////////////////////////////////////


#include<stdio.h>

void StrCpyX(char *Dest, char *Src)
{
    while(*Src != '\0')
    {
        if(*Src !='\t')
        {
            *Dest=*Src;
            Dest++;
        }
        Src++;
    }
    *Dest='\0';
}

int main()
{
    char Arr[30];
    char Brr[30];

    
    printf("Enter the source string: \n");
    scanf("%[^'\n]s",Arr);
  
    StrCpyX(Brr,Arr); // strcpyX(200,100);

    printf("Copied string is: %s",Brr);
    return 0;
}