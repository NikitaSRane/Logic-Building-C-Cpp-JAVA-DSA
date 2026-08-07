// Accept N numbers from user and accept one another no as No, return frequency of that No from it.
// Input: N:    6
//        No:   66
//        Elements: 85  66  11   80  93    66
// Output: 2



#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////
//
// Function Name: Frequency
// Description: Return the frequency of given number.
// Input: Integer,Integer,Integer
// Output: Integer
// Author: Nikita Sagar Rane
// Date: 28/05/2024
//
///////////////////////////////////////////////

int Frequency(int Arr[], int iLength, int iNo)
{   
    int iCnt=0, iCount=0;

    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if( Arr[iCnt]== iNo)
        {
            iCount++;
        }
    }
    return iCount;
}

int main()
{
    int iSize=0,iCnt=0, iRet=0, iValue=0;
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

    iRet=Frequency(p,iSize,iValue);
    printf("Frequency is %d", iRet);

    free(p);

    return 0;
}