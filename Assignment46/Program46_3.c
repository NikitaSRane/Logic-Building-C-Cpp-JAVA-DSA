// Write a application  which accept file name from user and read all data from that file and display contents on screen.

#include<stdio.h>
#include<fcntl.h>
#include<string.h>
#include<unistd.h>

///////////////////////////////////////////////
//
// Function Name:  Main
// Description: Read all data from that file and display contents on screen.
// Author: Nikita Sagar Rane
// Date:13/07/2024
//
///////////////////////////////////////////////

int main()
{
    char filename[30];
    int fd=0;
    char buffer[100];
    int iRet=0;

    printf("Please enter file name that you want to read : \n");
    scanf("%s",filename);

    fd=open(filename,O_RDWR);
    if(fd  == -1)
    {
        printf("Unable to open file.\n");
        return 0;
    }

    while((iRet=read(fd,buffer,sizeof(buffer))) != 0)
    {
        printf("%s",buffer);
        memset(buffer,0,sizeof(buffer));
    }

    close(fd);

    return 0;
}