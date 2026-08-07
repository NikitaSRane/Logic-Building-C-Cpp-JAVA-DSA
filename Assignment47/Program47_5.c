// Write a application  which accept file name and one count from  user and read the number of characters from starting position
//Input: Demo.txt  12

#include<stdio.h>
#include<string.h>
#include<unistd.h>
#include<fcntl.h>

///////////////////////////////////////////////
//
// Function Name:  DisplayCharacter
// Description: Read the number of characters from starting position
// Input Parameter: Character, Integer
// Return Value: None
// Author: Nikita Sagar Rane
// Date:13/07/2024
//
///////////////////////////////////////////////

void DisplayCharacter(char FileName[], int size)
{
    int fd=0;
    int iRet=0;
    char Buffer[1024];

    fd=open(FileName,O_RDONLY);
    
    if(fd == -1)
    {
        printf("Unable to open file.\n");
        return;
    }

    iRet= read(fd,Buffer,size);
    printf("Data from file is:  %s",Buffer);
    memset(Buffer,0,sizeof(Buffer));
    printf("Number of characters are: %d",iRet);
    close(fd);
}


int main()
{
    char FileName[30];
    int ch=0;
    int iRet=0;

    printf("Enter file name that you want to open: \n");
    scanf("%s",FileName);

    printf("Enter the number of character that you want to read: \n");
    scanf(" %d",&ch);

    DisplayCharacter(FileName,ch);

    return 0;
}
