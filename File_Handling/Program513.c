#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<stdlib.h>
#include<string.h>  

int main()
{
    char FileName[30];
    int fd=0;
    char Buffer[100]={'\0'};
    int iRet=0;


    printf("Enter the file name that you want to read: \n");
    scanf("%s",FileName);

    fd=open(FileName,O_RDWR);

    if(fd == -1)
    {
        printf("Unable to open the file.\n");
        return 0;
    }

    while((iRet=read(fd,Buffer,sizeof(Buffer))) != 0)
    {
        write(1,Buffer,iRet); // better than memset 1=stdout
        // or
        //printf("%s",Buffer);
        //memset(Buffer,0,sizeof(Buffer));
    }

    close(fd);
    
    return 0;
}