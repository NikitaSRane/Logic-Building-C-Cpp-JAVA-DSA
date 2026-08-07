
// Write a program which accept string from user and reverse each word in place
// Input:    "marvellous infoSystems"
// Output:  "suollevram smetsySofni"

#include<stdio.h>

///////////////////////////////////////////////
//
// Function Name: ReverseString
// Description:reverse each word in place
// Input: Character
// Output: None
// Author: Nikita Sagar Rane
// Date:09/07/2024
//
///////////////////////////////////////////////

void Reverse(char *start, char *end)
{
    char temp;
    while(start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}
// Way first
void ReverseString(char *Str)
{
    char *Start = Str;
    char *End = Str;

    while (*Str != '\0')
    {
        if (*Str == ' ' || *Str == '\t')
        {
            Reverse(Start, End - 1);
        
            Start = Str + 1;
            End = Str + 1;
        }
        else
        {
            End++;
        }
        
        Str++;
    }
    
    Reverse(Start, End - 1); // for last word only
}


// way 2

/*
void ReverseString(char *str)
{
    char *start=str;
    char *end=str;
    while(1)
    {
        if((*end==' ')||(*end == '\0'))
        {
            Reverse(start,end-1);
            if(*end == '\0')
            {
                break;
            }
            start=end+1;
        }
        end++;
    }
}*/

int main()
{
    char Arr[30];

    printf("Enter string: \n");
    scanf("%[^\n]s", Arr);

    ReverseString(Arr);
    printf("Reverse string is: %s\n", Arr);

    return 0;
}


