// Write a program which accepts two strings from user and check whether contents of two strings are equal or not?

//Input:    "Marvellous"
//          "Marvellous"

//Output:   True

#include<stdio.h>
#include<stdbool.h>

///////////////////////////////////////////////
//
// Function Name: StrCmpX
// Description: 
// Input: Character,Character
// Output: Boolean
// Author: Nikita Sagar Rane
// Date: 19/06/2024
//
///////////////////////////////////////////////


bool StrCmpX(char *src,char *dest)
{
    while((*src != '\0')&&(*dest !='\0'))
    {
        if( *src != *dest)
        {
            break;
        }
        src++;
        dest++;
    }
    if((*src == '\0')&&(*dest == '\0'))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    char Arr[30];
    char Brr[30];
    bool bRet=false;

    printf("Enter first string: \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter second string: \n");
    scanf(" %[^'\n']s",Brr);

    bRet=StrCmpX(Arr,Brr);

    if(bRet == true)
    {
        printf("Both strings are equal.");
    }
    else
    {
        printf("Both strings are not equal.");  
    }
    
    return 0;
}