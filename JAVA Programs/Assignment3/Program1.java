import java.util.*;

class Program1
{
    public static void DisplayEven(int iValue)
    {
        if(iValue < 0)
        {
            iValue=-iValue;
        }
        
        int iCnt=1;

        while(iValue > 0)
        {
            if(iCnt % 2 != 0)
            {
                iCnt++;
            }
            System.out.print(iCnt+"\t");
            iCnt++;

            iValue--;
        }
    }
    public static void main(String args[])
    {
        try(Scanner sobj=new Scanner(System.in))
        {
            System.out.println("Enter number: ");
            int iNo=sobj.nextInt();

            DisplayEven(iNo);
        }
        catch(InputMismatchException eobj)
        {
            System.out.println("Input Error: Please enter integers only.");
        }
        catch(Exception eobj)
        {
            System.out.println("Error: "+eobj);
        }
    }
}