import java.util.*;

class Program5
{
    public static void Display(int iValue)
    {
        if(iValue < 0)
        {
            iValue= -iValue;
        }
        while(iValue > 0)
        {
            System.out.print("*\t");
            iValue--;
        }
    }
    public static void main(String args[])
    {
        try(Scanner sobj= new Scanner(System.in);)
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