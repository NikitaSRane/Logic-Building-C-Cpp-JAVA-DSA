// Check number is perfect or not?

import java.util.*;

class Program2
{
    public static boolean isPerfect(int iValue)
    {
        if(iValue <= 0) // 0 and negative numbers can not be perfect numbers
        {
            return false;
        }
        int iSum=0;
        for(int iCnt=1; iCnt<=iValue/2; iCnt++)
        {
            if(iValue % iCnt == 0)
            {
                iSum=iSum+iCnt;
            }
        }
        if(iSum == iValue)
        {
            return true;
        }
        return false;
    }
    
    public static void main(String args[])
    {
        try(Scanner sObj=new Scanner(System.in))
        {
            System.out.println("Enter number: ");
            int iNo=sObj.nextInt();
            boolean bRet=isPerfect(iNo);
            if(bRet)
            {
                System.out.println("Number is perfect");
            }
            else
            {
                System.out.println("Number is not perfect.");
            }
        }
        catch(Exception eObj)
        {
            System.out.println(eObj);
        }
    }
}