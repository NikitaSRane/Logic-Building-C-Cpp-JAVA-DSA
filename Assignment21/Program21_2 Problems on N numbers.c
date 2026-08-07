// Accept N numbers from user and accept one another no as No, return index of first occurance of that number.
// Input: N:    6
//        No:   66
//        Elements: 85  66  11   80  93    66
// Output: 1



#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////
//
// Function Name: FirstOcc
// Description:Return index of first occurance of that number.
// Input: Integer,Integer,Integer
// Output: Integer
// Author: Nikita Sagar Rane
// Date: 28/05/2024
//
///////////////////////////////////////////////

int FirstOcc(int Arr[], int iLength, int iNo)
{   
    int iCnt=0;

    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if( Arr[iCnt]== iNo)
        {
            return iCnt;
        }
    }
    return -1;

}

int main()
{
    int iSize=0,iCnt=0, iValue=0;
    int iRet=0;
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

    printf("Enter the number which you want to search:\n");
    scanf("%d",&iValue);

    iRet=FirstOcc(p,iSize,iValue);

    if(iRet== -1)
    {
        printf("Number not found(%d)",iRet);
    }
    else
    {
        printf("Index of first occurance is %d ",iRet);
    }

    free(p);

    return 0;
}