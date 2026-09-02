//Display numbers in given range.

import java.util.*;

class Program1
{
    public static void DisplayRange(int iValue1, int iValue2)
    {
        if(iValue2 < iValue1)
        {
            System.out.println("Invalid range.");
        }
        for(int iCnt=iValue1;iCnt<=iValue2;iCnt++)
        {
            System.out.print(iCnt+"\t");
        }
    }

    public static void main(String args[])
    {
        try(Scanner sObj=new Scanner(System.in))
        {
            System.out.println("Enter starting range: ");
            int iNo1=sObj.nextInt();
            System.out.println("Enter ending range: ");
            int iNo2=sObj.nextInt();

            DisplayRange(iNo1,iNo2);
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