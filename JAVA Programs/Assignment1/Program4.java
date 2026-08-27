import java.util.*;

class Program4
{
    public static boolean Divide(int iValue1, int iValue2)
    {
        return iValue1 % iValue2 == 0;
    }
    public static void main(String args[])
    {
        try(Scanner sobj=new Scanner(System.in);)
        {
            System.out.print("Enter first number: ");
            int iNo1=sobj.nextInt();
            System.out.print("Enter second number: ");
            int iNo2=sobj.nextInt();
            boolean bRet=Divide(iNo1,iNo2);
            if(bRet)
            {
                System.out.println("Number is divisible by "+iNo2);
            }
            else
            {
                System.out.println("Number is not divisible by "+iNo2);
            }
        }
        catch(InputMismatchException eobj)
        {
            System.out.println("Input Error : Please enter integers only.");
        }
        catch(ArithmeticException eobj)
        {
            System.out.println("Zero Division Error : Dominator cannot be zero.");

        }
        catch(Exception eobj)
        {
            System.out.println("Unexpected Error"+eobj);
        }
    }
}