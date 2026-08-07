// Write a program which accept string from user and accept one character. Return index of first occurence of that character. 

#include<stdio.h>
#include<stdbool.h>

///////////////////////////////////////////////
//
// Function Name: FirstOcc
// Description: Return index of first occurence of that character.
// Input: Character,Character
// Output: Integer
// Author: Nikita Sagar Rane
// Date: 05/06/2024
//
///////////////////////////////////////////////

int FirstOcc(char *str,char cValue)
{
    int iCnt=1;

    bool bFlag=false;
    while( *str != '\0')
    {
        if(*str ==cValue )
        {
            bFlag=true;
            break;
        }
        iCnt++;
        str++;
    }
    if(bFlag==true)
    {
        return iCnt;
    }
    else
    {
        return -1;  
    }
}

/*
int FirstOcc(char *str, char cValue)
{
    char *arr=str;
    int first=-1;

    while(*str != '\0')
    {
        if( *str == cValue)
        {
            first=str-arr;
            break;
            return first;
        }
        str++;
    }
    return first;
}

*/


int main()
{
    char arr[20];
    char ch='\0';
    int iRet=0;

    printf("Enter string: ");
    scanf("%[^'\n']s",arr);

    printf("Enter character:");
    scanf(" %c",&ch);

    iRet=FirstOcc(arr,ch);

    printf("Index of first occurence of character is %d.",iRet);

    return 0;
}