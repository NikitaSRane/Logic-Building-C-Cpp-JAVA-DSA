// Write a application  which accept file name from  user and open that file in read mode.

#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

///////////////////////////////////////////////
//
// Function Name:  Main
// Description: Open file in read mode
// Author: Nikita Sagar Rane
// Date:13/07/2024
//
///////////////////////////////////////////////

int main()
{
    char filename[30];
    int fd=0;
    printf("Please enter file name that you want to open : \n");
    scanf ("%s",filename);

    fd=open(filename,O_RDONLY);
    if(fd == -1)
    {
        printf("Unable to open file.\n");
    }
    else
    {
        printf("File has been opened successfully.\n");
    }
    close(fd);

    return 0;
}