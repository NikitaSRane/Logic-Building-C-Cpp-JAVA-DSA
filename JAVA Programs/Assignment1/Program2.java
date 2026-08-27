import java.util.*;

class Program2
{
    public static void Display(String sValue, int iValue)
    {
        if(sValue == null)
        {
            throw new NullPointerException("Input string cannot be null");
        }
        if(iValue < 0)
        {
            iValue= -iValue;
        }

       for(int iCnt=1;iCnt<=iValue;iCnt++)
       {
            System.out.println(sValue);
       }
    }
    public static void main(String args[])
    {
        try(Scanner sobj=new Scanner(System.in);)
        {
            System.out.println("Enter word");
            String str=sobj.nextLine();
            System.out.println("Enter number of iterations: ");
            int iNo=sobj.nextInt();
            Display(str,iNo);
        }
        catch(NullPointerException eobj)
        {
            System.out.println("Null Error: "+eobj.getMessage());
        }
        catch(InputMismatchException eobj)
        {
            System.out.println("Input Error: Please enter integers only.");
        }
        catch(Exception eobj)
        {
            System.out.println("Error: "+eobj.getMessage());
        }
    }
}