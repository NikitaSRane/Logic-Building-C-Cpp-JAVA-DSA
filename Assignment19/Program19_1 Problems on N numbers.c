// Accept N numbers from user and return difference between summation of even elements and summation of odd elements.
// Input:N: 6
//       Elements: 85   66  3   80  93  88 
// Output:  53 (234-181)

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////
//
// Function Name: Difference
// Description: difference between summation of even elements and summation of odd elements
// Input: Integer,Integer
// Output: Integer
// Author: Nikita Sagar Rane
// Date: 28/05/2024
//
///////////////////////////////////////////////

int Difference(int Arr[],int iLength)
{
    int sumEven=0, sumOdd=0,iCnt=0;

    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            sumEven=sumEven+Arr[iCnt];
        }

        if(Arr[iCnt] % 2 != 0)
        {
            sumOdd=sumOdd+Arr[iCnt];
        }
    }

    return sumEven-sumOdd;
}

int main()
{
    int iSize=0, iCnt=0, iRet=0;
    int *p=NULL;

    printf("Enter number of elements:\n");
    scanf("%d",&iSize);

    p=(int*)malloc(iSize*sizeof(int));

    if(p==NULL)
    {
        printf("Unable to allocate memory.\n");
        return -1;
    }

    printf("Enter %d elements:\n",iSize);
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        printf("Enter element: %d \n",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    iRet=Difference(p,iSize);
    printf("Difference is: %d",iRet);

    free(p);

    return 0;
}