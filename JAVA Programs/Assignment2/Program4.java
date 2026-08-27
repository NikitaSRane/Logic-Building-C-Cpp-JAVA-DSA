import java.util.*;

class Program4
{
    public static void Display(int iValue1, int iValue2)
    {
        if(iValue2 < 0)
        {
            iValue2=-iValue2;
        }
        
        for(int iCnt=1;iCnt<=iValue2;iCnt++)
        {
            System.out.print(iValue1+"\t");
        }
    }
    public static void main(String args[])
    {
        try(Scanner sobj=new Scanner(System.in))
        {
            System.out.println("Enter first number: ");
            int iNo1=sobj.nextInt();

            System.out.println("Enter second number: ");
            int iNo2=sobj.nextInt();

            Display(iNo1,iNo2);
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