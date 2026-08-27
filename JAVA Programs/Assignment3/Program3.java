
import java.util.*;

class Program3
{
    public static void DisplayEvenFactors(int iValue)
    {

        if(iValue < 0)
        {
            iValue = -iValue;
        }

        for(int iCnt=1;iCnt<=iValue/2;iCnt++)
        {
            if(iValue % iCnt == 0)
            {
                if(iCnt % 2 ==0)
                {
                    System.out.print(iCnt+"\t");
                }
            }
        }

    }
    public static void main(String args[])
    {
        try(Scanner sobj=new Scanner(System.in))
        {
            System.out.println("Enter number: ");
            int iNo=sobj.nextInt();

            DisplayEvenFactors(iNo);
        }
        catch(InputMismatchException eobj)
        {
            System.out.println("Input Error: "+eobj);
        }
        catch(Exception eobj)
        {
            System.out.println(eobj);
        }
    }
}