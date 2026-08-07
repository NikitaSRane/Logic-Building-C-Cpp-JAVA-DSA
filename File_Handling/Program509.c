#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<stdlib.h>
#include<string.h>  

int main()
{
    char FileName[20];
    int fd=0;
    char Arr[100]={'\0'};
    int iRet=0;

    printf("Enter the file name that you want to read: \n");
    scanf("%s",FileName);

    fd=open(FileName,O_RDWR);

    if(fd == -1)
    {
        printf("Unable to open the file.\n");
        return 0;
    }

    iRet=read(fd,Arr,10);
    
    printf("Number of bytes successfully read from the file: %d\n",iRet);
    printf("Data from file: %s\n",Arr);

    close(fd);
    
    return 0;
}