//Return addition of all even numbers in given range.

import java.util.*;

class Program4
{
    public static int sumEvenRange(int iValue1, int iValue2)
    {
        if((iValue1 < 0 )||(iValue2 < 0) || (iValue2 < iValue1)) 
        {
            System.out.println("Invalid range.");
            return -1;
        }
        int iSum=0;
        for(int iCnt=iValue1;iCnt<=iValue2;iCnt++)
        {
            if(iCnt % 2 == 0)
            {
                iSum=iSum+iCnt;
            }
        }
        return iSum;
    }

    public static void main(String args[])
    {
        try(Scanner sObj=new Scanner(System.in))
        {
            System.out.println("Enter starting range: ");
            int iNo1=sObj.nextInt();
            System.out.println("Enter ending range: ");
            int iNo2=sObj.nextInt();

            int iRet=sumEvenRange(iNo1,iNo2);
            System.out.println("Sum is: "+iRet);
        }
        catch(InputMismatchException eObj)
        {
            System.out.println("Input Error: Enter only integer value.");
        }
        catch(Exception eObj)
        {
            System.out.println(eObj);
        }
    }
}