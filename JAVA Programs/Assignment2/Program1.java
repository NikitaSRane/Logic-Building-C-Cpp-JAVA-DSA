import java.util.*;

class Program1
{
    public static void Display(int iValue)
    {
        if(iValue < 0)
        {
            iValue=-iValue;
        }

        for(int iCnt=1;iCnt<=iValue;iCnt++)
        {
            System.out.print("*\t");
        }
    }

    public static void main(String args[])
    {
        try(Scanner sobj=new Scanner(System.in))
        {
            System.out.println("Enter number: ");
            int iNo=sobj.nextInt();

            Display(iNo);
        }
        catch(InputMismatchException eobj)
        {
            System.out.println("Input Error: Please enter integers only.");
        }
    }
}