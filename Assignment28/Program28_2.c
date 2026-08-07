// Write a program which accept string from user and copy the contents of that string into another string.
// Input:   "Marvellous Multi OS"
//          10
// Output:  "Marvellous"

#include<stdio.h>

///////////////////////////////////////////////
//
// Function Name: strNCpy
// Description: Copy contents of one string to another
// Input: CharacterArray, CharacterArray, Integer
// Output: None
// Author: Nikita Sagar Rane
// Date: 17/06/2024
//
///////////////////////////////////////////////

void strNCpy(char *dest,char *src, int iNo)
{
    int iCnt=1;

    while((*src != '\0')&&(iCnt <=iNo))
    {
        *dest=*src;
        dest++;
        src++;
        iCnt++;
    }
    *dest='\0';
}


int main()
{
    char Arr[30];
    char Brr[30];
    int iValue=0;

    printf("Enter string: \n");
    scanf("%[^'\n]s",Arr);

    printf("Enter number of character which you want to copy.\n");
    scanf("%d",&iValue);

    strNCpy(Brr,Arr,iValue);

    printf("Copied string is: %s",Brr);

    return 0;
}