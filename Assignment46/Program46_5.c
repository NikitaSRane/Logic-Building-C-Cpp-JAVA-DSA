// Write a application  which accept file name from user and one string from user.  Write that string at the end of the file.

#include<stdio.h>
#include<fcntl.h>
#include<string.h>
#include<unistd.h>

///////////////////////////////////////////////
//
// Function Name:  Main
// Description:  Write string at the end of the file.
// Author: Nikita Sagar Rane
// Date:13/07/2024
//
///////////////////////////////////////////////

int main()
{
    char filename[30];
    int fd=0;
    char buffer[100];
    char data[30];

    printf("Please enter file name that you want to write : \n");
    scanf("%s",filename);

    printf("Enter the data that you want to append  :\n");
    scanf(" %[^'\n']s",data);

    fd=open(filename,O_RDWR  | O_APPEND);
    if(fd  == -1)
    {
        printf("Unable to open file.\n");
        return 0;
    }

    write(fd,data,strlen(data));

    close(fd);

    return 0;
}