// Write a application  which accept file name from user and display size of file

#include<stdio.h>
#include<fcntl.h>
#include<string.h>
#include<unistd.h>

///////////////////////////////////////////////
//
// Function Name:  Main
// Description: Display size of file
// Author: Nikita Sagar Rane
// Date:13/07/2024
//
///////////////////////////////////////////////

int main()
{
    char filename[30];
    int fd=0;
    char buffer[100];
    int iRet=0, iSum=0;

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
        iSum=iSum+iRet;
    }
    printf("File size is %d bytes",iSum);

    close(fd);

    return 0;
}