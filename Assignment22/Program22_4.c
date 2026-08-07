// Accept N numbers from user and display all such numbers which contains 3 digits in it.
// Input: N:    6
//        Elements:8225 665 3 76 953 858
// Output: 665 953 858

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////
//
// Function Name: DisplayDigit
// Description:display all such numbers which contains 3 digits in it
// Input: Integer,Integer
// Output: -
// Author: Nikita Sagar Rane
// Date: 30/05/2024
//
///////////////////////////////////////////////



void DisplayDigit(int Arr[], int iLength)
{   
    int iCnt=0, iNo=0;
    int iCount=0;       
    
    printf("Elements which contains 3 digits:\n");

    for(iCnt=0;iCnt<iLength;iCnt++)
    {   
        iNo=Arr[iCnt];

        while(Arr[iCnt]!=0)
        {
            Arr[iCnt]=Arr[iCnt] / 10;
            iCount++;
        }
        if(iCount==3)
        {
            printf("%d\n",iNo);
        }

        iCount=0;
    }
}

int main()
{
    int iSize=0,iCnt=0;
    int *p=NULL;

    printf("Enter number of elements:\n");
    scanf("%d",&iSize);

    p=(int*)malloc(iSize*sizeof(int));

    if(p==NULL)
    {
        printf("Unable to allocate the memory.\n");
        return -1;
    }

    printf("Enter %d elements:\n",iSize);

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        printf("Enter element: %d\n",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    DisplayDigit(p,iSize);

    free(p);

    return 0;
}