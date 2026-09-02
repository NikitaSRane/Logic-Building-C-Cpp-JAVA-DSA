// Check number is strong or not?
// strong number is such a number whose sum of factorial of each digits is equal to the number itself.

import java.util.*;

class Program4
{
    public static int factorial(int iValue) 
    {
        int iFact=1;

        for(int iCnt=1;iCnt<=iValue;iCnt++) 
        {
            iFact=iFact*iCnt; 
        }
        return iFact; 
    }
    public static boolean checkStrong(int iValue) 
    {
        if(iValue <= 0 ) // edgecases
        {
            return false;
        }
        int iNo=iValue,iSum=0;
        while(iValue != 0) 
        {
            int iDigit=iValue % 10; 
            iSum=iSum+factorial(iDigit); 
            iValue=iValue/10; 
        }
        return iNo == iSum;
    }

    
    public static void main(String args[])
    {
        try(Scanner sObj=new Scanner(System.in))
        {
            System.out.println("Enter number: ");
            int iNo=sObj.nextInt();
            boolean bRet=checkStrong(iNo); // 145
            if(bRet)
            {
                System.out.println("Number is Strong");
            }
            else
            {
                System.out.println("Number is not Strong.");
            }
        }
        catch(Exception eObj)
        {
            System.out.println(eObj);
        }
    }
}