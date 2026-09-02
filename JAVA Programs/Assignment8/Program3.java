// Check number is armstrong or not?
// whether sum of power of each digits is equal to number itself . (power depends on number of digits)
// 153 = 1*1*1 + 5*5*5 + 3*3*3
// 1634 = 1*1*1*1 + 6*6*6*6 + 3*3*3*3 + 4*4*4*4

import java.util.*;

class Program3
{
    public static int countDigit(int iValue)
    {
        int iCount=0;
        while(iValue != 0)
        {  
            iCount++; 
            iValue=iValue/10;
        }
        return iCount;
    }

    public static int power(int iValue, int iCount)
    {
        int iResult=1;
        for(int iCnt=1; iCnt<= iCount ; iCnt++) 
        {
            iResult=iResult*iValue; 
        }
        return iResult;
    }

    public static boolean isArmStrong(int iValue)
    {
        if(iValue <= 0 )
        {
            return false;
        }

        int iNo=iValue,iSum=0;
        int iCount=countDigit(iValue);

        while(iValue != 0)
        {
            int iDigit=iValue % 10; 
            iSum=iSum+power(iDigit,iCount);
            iValue=iValue/10; 
        }
        return iSum == iNo;
    }
    
    public static void main(String args[])
    {
        try(Scanner sObj=new Scanner(System.in))
        {
            System.out.println("Enter number: ");
            int iNo=sObj.nextInt();
            boolean bRet=isArmStrong(iNo);
            if(bRet)
            {
                System.out.println("Number is ArmStrong");
            }
            else
            {
                System.out.println("Number is not ArmStrong.");
            }
        }
        catch(Exception eObj)
        {
            System.out.println(eObj);
        }
    }
}