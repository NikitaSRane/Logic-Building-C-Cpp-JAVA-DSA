#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<stdlib.h>

int main()
{

    char FileName[20];
    int fd=0;

    printf("Enter the file name that you want to create: \n");
    scanf("%s",FileName);

    fd=creat(FileName,0777);

    if(fd == -1)
    {
        printf("Unable to create file.\n");
    }
    else
    {
        printf("File gets successfully created with fd %d\n",fd);
    }
    return 0;
}