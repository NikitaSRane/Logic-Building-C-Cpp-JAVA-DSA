// Write a program which accept string from user and count number of words from string  
// Input:    "Marvellous Multi OS"
// Output:  3

#include<stdio.h>
#include<stdbool.h>

///////////////////////////////////////////////
//
// Function Name: WordCount
// Description: count number of words from string  
// Input: Character
// Output: Integer
// Author: Nikita Sagar Rane
// Date:19/06/2024
//
///////////////////////////////////////////////


int WordCount(char *Str)
{
    int iCount=0;
    bool bFlag=false;

    if(Str == NULL)
    {
        return -1;
    }

    while(*Str != '\0')
    {
        if((*Str == ' ')||(*Str == '\t')) // whitespace characters
        {
            bFlag=false;
        }
        else if(bFlag==false)
        {
            iCount++;
            bFlag=true;
        }
        Str++;
    }
    return iCount;
}

int main()
{
    char Arr[30];
    int  iRet=0;

    printf("Enter string:\n");
    scanf("%[^'\n']s",Arr);

    iRet=WordCount(Arr);
    if(iRet == -1)
    {
        printf("String is empty.\n");
    }
    else
    {
        printf("Number of words are: %d",iRet);

    }

    return 0;
}