// Write a application  which accept file name from  user and count number of white spaces from that file

#include<stdio.h>
#include<string.h>
#include<unistd.h>
#include<fcntl.h>

///////////////////////////////////////////////
//
// Function Name:  CountSpace
// Description: Count number of white spaces from that file
// Input Parameter: Character
// Return Value: Integer
// Author: Nikita Sagar Rane
// Date:13/07/2024
//
///////////////////////////////////////////////

int CountSpace(char FileName[])
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
            if(Buffer[i] == ' ' || Buffer[i] =='\t')
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

    printf("Enter file name that you want to open: \n");
    scanf("%s",FileName);

    iRet=CountSpace(FileName);
    printf("Number of white spaces are: %d",iRet);

    return 0;
}
