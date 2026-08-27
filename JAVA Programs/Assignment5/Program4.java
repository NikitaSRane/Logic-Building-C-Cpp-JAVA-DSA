import java.util.*;

class Program4
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
        
        int iNo=1;
        for(int iCnt=1; iCnt<=iValue;iCnt++)
        {
            if(iNo % 2 != 0)
            {
                System.out.print(iNo+"\t");
            }
            iNo=iNo+2;
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