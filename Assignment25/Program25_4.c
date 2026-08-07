// Write a program which accept string from user and check whether it contains vowels in it or not.

#include<stdio.h>
#include<stdbool.h>

///////////////////////////////////////////////
//
// Function Name: CheckVowel
// Description: Check string contains vowels or not.
// Input: Character
// Output: Boolean
// Author: Nikita Sagar Rane
// Date: 31/05/2024
//
///////////////////////////////////////////////

bool CheckVowel(char *str)
{
    while(*str != '\0')
    {
        if((*str=='a')||(*str=='e')||(*str=='i')||(*str=='o')||(*str=='u')||(*str=='A')||(*str=='E')||(*str=='I')||(*str=='O')||(*str=='U'))
        {
            return true;
        }
        str++;
    }
    return false;

    /* Using flag
    
    bool bFlag=false;

    char ch[]={'a','e','i','o','u','A','E','I','O','U','\0'};

    while( *str != '\0')
    {
        int iCnt=0;

        for(iCnt=0;iCnt<sizeof(ch)-1;iCnt++)
        {
            if(*str == ch[iCnt])
            {
                bFlag=true;
                break;
            }
        }
        str++;
    }
    if(bFlag==true)
    {
        return true;
    }
    else
    {
        return false;
    }
    
    */

    /*      Without using flag


    char ch[]={'a','e','i','o','u','A','E','I','O','U','\0'};

    while( *str != '\0')
    {
        int iCnt=0;

        for(iCnt=0;iCnt<sizeof(ch)-1;iCnt++)
        {
            if(*str == ch[iCnt])
            {
                return true;
            }
        }
        str++;
    }
    return false;
    */
}

int main()
{
    char arr[20];
    bool bRet=false;

    printf("Enter string: ");
    scanf("%[^'\n']s",arr);


    bRet=CheckVowel(arr);

    if(bRet==true)
    {
        printf("String contains vowels.\n");
    }
    else
    {
        printf("String does not contain vowels.\n");
    }
    
    return 0;
}