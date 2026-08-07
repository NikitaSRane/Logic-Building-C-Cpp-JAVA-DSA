// Write a application  which accept file name from user and create that file.

#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

///////////////////////////////////////////////
//
// Function Name:  Main
// Description: crete file
// Author: Nikita Sagar Rane
// Date:13/07/2024
//
///////////////////////////////////////////////

int main()
{
    char filename[30];
    int fd=0;
    printf("Please enter file name that you want to create : \n");
    scanf("%s",filename);

    fd=creat(filename,0777);
    if(fd == -1)
    {
        printf("Unable to create file.\n");
    }
    else
    {
        printf("File has been created successfully with fd %d.\n",fd);
    }
    close(fd);

    return 0;
}