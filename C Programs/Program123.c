/*

step1: Accept number of elements from user
step2: allocate dynamic memory
step3: accept values from user and store into memory
step4:pass the address of that memory
step5:after using that memory free it explicitely.

*/

#include<stdio.h>
#include<stdlib.h>

int Addition(int Arr[],int iSize)
{
    int i=0;
    int iSum=0;

    for(i=0;i<iSize;i++)
    {
        iSum=iSum+Arr[i]; 
    }
    return iSum;
}

int main()  
{
    int iCount=0, i=0,iRet=0;
    int *Brr=NULL;
    //step1: Accept number of elements from user

    printf("Enter number of elements that you want:\n");
    scanf("%d",&iCount);

    //step2: allocate dynamic memory

    Brr=(int*)malloc(iCount*sizeof(int));

    //step3: accept values from user and store into memory

    printf("Enter the elements:\n");

    for(i=0;i<iCount;i++)
    {
        scanf("%d",&Brr[i]);
    }

    printf("Entered elements are:\n");
    for(i=0;i<iCount;i++)
    {
        printf("%d\n",Brr[i]);
    }
    
    //step4:pass the address of that memory to the function(Any)
    iRet=Addition(Brr,iCount);
    printf("Addition is %d",iRet);

    //step5:after using that memory free it explicitely.

    free(Brr);
    return 0;
}