//Problem statement-Accept two numbers from user and perform its addition

#include<stdio.h>

int main()
{
    int i,j,k;
    printf("Enter first number: \n");
    scanf("%d",&i);
    printf("Enter second number: \n");
    scanf("%d",&j);
    
    k=i+j;
    printf("Addition is : %d",k);
    return 0;
}