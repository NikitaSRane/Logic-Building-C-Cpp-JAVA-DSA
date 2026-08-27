import java.util.*;

class Program5
{
    public static void DisplayPattern(int iValue)
    {
        if(iValue == 0)
        {
            throw new IllegalArgumentException("Zero cannot display pattern.");
        }
        if(iValue < 0)
        {
            iValue=-iValue;
        }
        
        for(int iCnt=1; iCnt<=iValue;iCnt++)
        {
            System.out.print(iValue*iCnt+"\t");
        }

    }

    public static void main(String args[])
    {
        try(Scanner sobj=new Scanner(System.in))
        {
            System.out.println("Enter number: ");
            int iNo=sobj.nextInt();

            DisplayPattern(iNo);
        }
        catch(IllegalArgumentException eobj)
        {
            System.out.println(eobj.getMessage());
        }
        catch(InputMismatchException eobj)
        {
            System.out.println("Input Error: Enter only integers");
        }
        catch(Exception eobj)
        {
            System.out.println(eobj);
        }
    }
}