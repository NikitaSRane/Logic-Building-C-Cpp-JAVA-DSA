import java.util.*;

class Program1
{
    public static void display(int iValue)
    {
        if(iValue < 50)
        {
            System.out.println("Small");
        }
        else if(iValue <= 100)
        {
            System.out.println("Medium");
        }
        else
        {
            System.out.println("Large");
        }
    }

    public static void main(String args[])
    {
        try(Scanner sobj=new Scanner(System.in))
        {
            System.out.println("Enter number:");
            int iNo=sobj.nextInt();
            display(iNo);
        }
        catch(InputMismatchException eobj)
        {
            System.out.println("Enter integer only.");
        }
        catch(Exception eobj)
        {
            System.out.println(eobj);
        }
    }
}