// Write a application  which accept file name and one character from  user and count number of occurences of that characters from that file
//Input: Demo.txt  'M'

#include<stdio.h>
#include<string.h>
#include<unistd.h>
#include<fcntl.h>

///////////////////////////////////////////////
//
// Function Name:  CountCharacter
// Description: Count number of occurences of that characters from that file
// Input Parameter: Character, Character
// Return Value: Integer
// Author: Nikita Sagar Rane
// Date:13/07/2024
//
///////////////////////////////////////////////

int CountCharacter(char FileName[], char Letter)
{
    int fd=0;
    int iRet=0;
    char Buffer[1024];
    int i=0;
    int iCount=0;

    fd=open(FileName,O_RDONLY);
    
    if(fd == -1)
    {
        printf("Unable to open file.\n");
        return 0;
    }

    while((iRet=read(fd,Buffer,sizeof(Buffer))) != 0)
    {
        for(i=0; i<iRet; i++)
        {
            if(Buffer[i] == Letter)
            {
                iCount++;
            }
        }

    }
    close(fd);

    return iCount;
}


int main()
{
    char FileName[30];
    int iRet=0;
    char ch='\0';

    printf("Enter file name that you want to open: \n");
    scanf("%s",FileName);

    printf("Enter the character that you want to search: \n");
    scanf(" %c",&ch);

    iRet=CountCharacter(FileName,ch);
    printf("Number of %c characters are: %d",ch,iRet);

    return 0;
}
