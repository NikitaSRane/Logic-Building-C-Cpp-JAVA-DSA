import java.util.*;

class Program3
{
    public static void DisplayNonFactors(int iValue)
    {
        if(iValue == 0)
        {
            throw new IllegalArgumentException("Zero does not have factors.");
        }
        if(iValue < 0)
        {
            iValue=-iValue;
        }
        
        for(int iCnt=1;iCnt<iValue;iCnt++)
        {
            if(iValue % iCnt != 0)
            {
                System.out.print(iCnt+"\t");
            }
        }
    }
    public static void main(String args[])
    {
        try(Scanner sobj=new Scanner(System.in))
        {
            System.out.println("Enter number: ");
            int iNo=sobj.nextInt();

            DisplayNonFactors(iNo);
        }
        catch(InputMismatchException eobj)
        {
            System.out.println("Error: Enter integers only.");
        }
        catch(IllegalArgumentException eobj)
        {
            System.out.println(eobj.getMessage());
        }
        catch(Exception eobj)
        {
            System.out.println(eobj);
        }
    }
}