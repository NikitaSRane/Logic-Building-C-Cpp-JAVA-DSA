#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<stdlib.h>

int main()
{

    char FileName[20];
    int fd=0;

    printf("Enter the file name that you want to open: \n");
    scanf("%s",FileName);

    fd=open(FileName,O_RDWR);

    if(fd == -1)
    {
        printf("Unable to open the file.\n");
    }
    else
    {
        printf("File gets successfully opened with fd %d\n",fd);
    }
    return 0;
}