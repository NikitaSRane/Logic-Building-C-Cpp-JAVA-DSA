import java.util.*;

class Program3
{
    public static void Display(int iValue)
    {
        if(iValue < 10)
        {
            System.out.println("Hello");
        }
        else
        {
            System.out.println("Demo");
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
        catch(Exception eobj)
        {
            System.out.println(eobj);
        }

    }
    
}