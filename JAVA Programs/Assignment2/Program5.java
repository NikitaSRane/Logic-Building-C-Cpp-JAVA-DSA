import java.util.*;

class Program5
{
    public static boolean checkEven(int iValue)
    {
        return iValue % 2 == 0;
    }
    public static void main(String args[])
    {
        try(Scanner sobj=new Scanner(System.in))
        {
            System.out.println("Enter number: ");
            int iNo=sobj.nextInt();

            boolean bRet=checkEven(iNo);
            if(bRet)
            {
                System.out.println("Number is Even.");
            }
            else
            {
                System.out.println("Number is Odd.");
            }
        }
        catch(InputMismatchException eobj)
        {
            System.out.println("Input Error: Please enter integers only.");
        }
        catch(Exception eobj)
        {
            System.out.println(eobj);
        }

    }
    
}