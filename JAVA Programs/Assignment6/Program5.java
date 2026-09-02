//count frequency of number which is less than 6.

import java.util.*;

class Program5
{
    public static int checkDigit(int iValue)
    {
        int iCount=0;

        while(iValue != 0)
        {
            if(((iValue % 10)> 0)&&((iValue % 10)<=6))
            {
                iCount++;
            }
            iValue=iValue / 10;
        }
        return iCount;
    }
    public static void main(String args[])
    {
        try(Scanner sObj=new Scanner(System.in))
        {
            System.out.println("Enter number: ");
            int iNo=sObj.nextInt();
            int iRet=checkDigit(iNo);
            System.out.println("Frequency of digits are: "+iRet);
        }
        catch(Exception eObj)
        {
            System.out.println(eObj);
        }
    }
}