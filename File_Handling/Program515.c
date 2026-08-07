#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<stdlib.h>
#include<string.h>  

int main()
{
    char FileName[30];
    int fdRead=0;
    int fdWrite=0;
    char Buffer[1024]={'\0'}; //size of 1 KB
    int iRet=0;


    printf("Enter the existing file name that you want to open: \n");
    scanf("%s",FileName);

    fdRead=open(FileName,O_RDWR);

    if(fdRead == -1)
    {
        printf("Unable to open the file.\n");
        return 0;
    }

    printf("Enter the name of file that you want to create: \n");
    scanf("%s",FileName);

    fdWrite=creat(FileName,0777);

    if(fdWrite == -1)
    {
        printf("Unable to create new file.\n");
        return 0;
    }

    while((iRet=read(fdRead,Buffer,sizeof(Buffer))) != 0)
    {
        write(fdWrite,Buffer,iRet);
        memset(Buffer,'\0',sizeof(Buffer)); // use to clean buffer and set 0 at each byte also we can use '\0' instead of 0.
    }

    close(fdRead);
    close(fdWrite);
    
    return 0;
}