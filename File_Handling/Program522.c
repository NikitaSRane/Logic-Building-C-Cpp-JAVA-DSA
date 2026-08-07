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
    int i=0;
    int icount=0;

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
        for(i=0;i<iRet;i++)
        {
            if(Buffer[i] == 'a' || Buffer[i] =='e'|| Buffer[i] == 'i' || Buffer[i] =='o'|| Buffer[i] == 'u' || Buffer[i] == 'A' || Buffer[i] =='E'|| Buffer[i] == 'I' || Buffer[i] =='O'|| Buffer[i] == 'U')
            {
                icount++;
            }
        }
    }
    printf("Number of vowels are: %d", icount);


    close(fd);
    
    return 0;
}