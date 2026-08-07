/*
    0 to 35     fail                        (35 is exclusive)
    35 to 50    pass                        (50 is exclusive)
    50 to 60    second                      (60 is exclusive)
    60 to 75    first                       (75 is exclusive)
    75 to 100   first with distinction       (100 is inclusive)
*/

#include<stdio.h>

//user defined macro

#define RET_INVALID -1
#define RET_FAIL 1
#define RET_PASS 2
#define RET_SECOND 3
#define RET_FIRST 4
#define RET_FIRSTDIST 5

int DisplayResult(float fMarks)
{
    if((fMarks<0.0f)||(fMarks>100.0f)) //filter input validation
    {
        return RET_INVALID;
    }

    //if.....else if ladder

    if((fMarks>=0.0f)&&(fMarks<35.0f))
    {
        return RET_FAIL;
    }
    else if((fMarks>=35.0f)&&(fMarks<50.0f))
    {
        return RET_PASS;
    }
    else if((fMarks>=50.0f)&&(fMarks<60.0f))
    {
        return RET_SECOND;
    }
    else if((fMarks>=60.0f)&&(fMarks<75.0f))
    {
        return RET_FIRST;
    }
    else if((fMarks>=75.0f)&&(fMarks<=100.0f))
    {
        return RET_FIRSTDIST;
    }
}

int main()
{

    float fValue=0.0;
    int iRet=0;

    printf("Enter your percentage :  ");
    scanf("%f",&fValue);

    iRet=DisplayResult(fValue);

    switch(iRet)
    {
        case RET_FAIL:
            printf("Student is FAIL \n");   
        break;

        case RET_PASS:
            printf("Student is having PASS class \n");
        break;

        case RET_SECOND:
            printf("Student is having SECOND class \n");
        break;

        case RET_FIRST:
            printf("Student is having FIRST class \n");
        break;
        
        case RET_FIRSTDIST:
            printf("Student is having DISTINCTION class \n");
        break;

        case RET_INVALID:
            printf("Invalid input \n");
        break;
    }
    return 0;
}