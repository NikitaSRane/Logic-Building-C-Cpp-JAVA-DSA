// Accept one character from user and check whether that charcter is vowel (a, e,i,o,u) or not.

#include<stdio.h>
#include<stdbool.h>

////////////////////////////////////////////////////////////
//
// Function Name: CheckVowel
// Description: Display whether character is vowel or not.
// Input: Character
// Output: -
// Author: Nikita Sagar Rane
// Date: 09/05/2024
//
///////////////////////////////////////////////////////////

bool CheckVowel(char ch)
{
    if((ch=='A')||(ch=='a')||(ch=='E')||(ch=='e')||(ch=='I')||(ch=='i')||(ch=='O')||(ch=='o')||(ch=='U')||(ch=='u'))
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
    char cValue='\0';
    bool bRet=false;

    printf("Enter character: ");
    scanf("%c",&cValue);

    bRet=CheckVowel(cValue);

    if(bRet==true)
    {
        printf("%c is vowel.\n",cValue);
    }
    else
    {
        printf("%c is not vowel.\n",cValue);
    }

    return 0;
}