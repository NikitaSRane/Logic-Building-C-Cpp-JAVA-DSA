// Write a program which accept string from user and display it in reverse order.

#include<stdio.h>

///////////////////////////////////////////////
//
// Function Name: ReverseString
// Description:Reverse the string
// Input: Character
// Output: None
// Author: Nikita Sagar Rane
// Date: 05/06/2024
//
///////////////////////////////////////////////

void ReverseString(char *str)
{
    char *Start=str;
    char *End=str;
    char temp;

    while(*End !='\0')
    {
        End++;
    }
    End--;

    while(Start<End)
    {
        temp=*Start;
        *Start=*End;
        *End=temp;

        Start++;
        End--;
    }
}

/*
int StringlenX(char *str)
{
    int iCount=0;

    while( *str != '\0')
    {
        iCount++;
        str++;
    }
    return iCount;
}

void ReverseString(char *str,int size)
{
    int iStart=0, iEnd=0,temp=0;
    iStart=0;
        
    iEnd=size-1;

    while(iStart<iEnd)
    {
        temp=str[iStart];
        str[iStart]=str[iEnd];
        str[iEnd]=temp;

        iStart++;
        iEnd--;
    }
}
*/

int main()
{
    char arr[20];
    //int len=0;

    printf("Enter string: ");
    scanf("%[^'\n']s",arr);
    //len=StringlenX(arr);

    //ReverseString(arr,len);

    ReverseString(arr);
    printf("Modified string is: %s",arr);

    return 0;
}