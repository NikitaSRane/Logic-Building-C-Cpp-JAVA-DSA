//Display all numbers in reverse order of given range

import java.util.*;

class Program5
{
    public static void DisplayReverseRange(int iValue1, int iValue2)
    {
        if((iValue1 < 0 )||(iValue2 < 0) || (iValue2 < iValue1)) 
        {
            System.out.println("Invalid range.");
            return;
        }

        for(int iCnt=iValue2;iCnt>=iValue1;iCnt--)
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

            DisplayReverseRange(iNo1,iNo2);
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