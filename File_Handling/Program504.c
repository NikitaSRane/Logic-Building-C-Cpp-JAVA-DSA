#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<stdlib.h>

int main()
{

    char FileName[20];
    int fd=0;

    printf("Enter the file name that you want to write: \n");
    scanf("%s",FileName);

    fd=open(FileName,O_RDWR);

    if(fd == -1)
    {
        printf("Unable to open the file.\n");
        return 0;
    }
    write(fd,"Hello World sagar",17);
    write(fd,"Nikita",6);
    close(fd);
    printf("Successfully writed in file.");
    return 0;
}