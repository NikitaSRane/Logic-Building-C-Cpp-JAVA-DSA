/*

step1: Accept number of elements from user
step2: allocate dynamic memory
step3: accept values from user and store into memory
step4:pass the address of that memory
step5:after using that memory free it explicitely.

*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int iCount=0, i=0;
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
    //missing

    //step5:after using that memory free it explicitely.

    free(Brr);
    return 0;
}