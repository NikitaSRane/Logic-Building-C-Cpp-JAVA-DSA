// Write a program which accept string from user and accept one character. Return index of last occurence of that character. 

#include<stdio.h>
#include<stdbool.h>

///////////////////////////////////////////////
//
// Function Name: LastOcc
// Description: Return index of last occurence of that character.
// Input: Character,Character
// Output: Integer
// Author: Nikita Sagar Rane
// Date: 01/06/2024
//
///////////////////////////////////////////////

int LastOcc(char *str, char cValue)
{
    int iCnt=1, iPos=-1;

    while( *str != '\0')
    {
        if(*str ==cValue )
        {
            iPos=iCnt;            
        }
        iCnt++;
        str++;
    }
    return iPos;
    
}

/*
int LastOcc(char *str, char cValue)
{
    char *arr=str;
    int last=0;
    bool bFlag=false;

    while(*str != '\0')
    {
        if( *str == cValue)
        {
            last=str-arr;
            bFlag=true;
        }   
        str++;
    }
    if(bFlag== true)
    {
        return last;
    }
    else
    {
        return -1;
    }
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

    iRet=LastOcc(arr,ch);

    printf("Index of last occurence of character is %d.",iRet);

    return 0;
}