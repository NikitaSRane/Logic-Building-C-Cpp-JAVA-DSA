// Write a program which accept character from user.
// If character is small display its corresponding capital character.
// and if it capital then display its corresponding small character.
// In other cases display as it is.


#include<stdio.h>

///////////////////////////////////////////////
//
// Function Name: Display
// Description: Swap the case of character.
// Input: Character
// Output: None
// Author: Nikita Sagar Rane
// Date: 01/06/2024
//
///////////////////////////////////////////////

void Display(char ch)
{
    int iCnt=0;
    char sletter='\0';
    char cletter='\0';

    if(((ch >='A')&&(ch <='Z'))||((ch >='a')&&(ch <='z')))
    {
        for(iCnt=1,cletter='A',sletter='a';iCnt<=26;iCnt++,sletter++,cletter++)
        {
            if(ch == cletter)
            {
                printf("%c",sletter);
            }
            if(ch == sletter)
            {
                printf("%c",cletter);
            }
        }
    }
    else
    {
        printf("%c",ch);
    }
    
}

int main()
{
    char cValue='\0';

    printf("Enter the character: ");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}
