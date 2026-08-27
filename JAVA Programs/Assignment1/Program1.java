import java.util.*;

class Program1
{
    public static float divide(int iValue1, int iValue2)
    {
        if(iValue2 == 0)
        {
            throw new ArithmeticException("Division by zero not allowed.");
        }

        float fAns=(float)iValue1/(float)iValue2;
        return fAns;
    }
    public static void main(String args[])
    {   
        try(Scanner sobj=new Scanner(System.in);){
            System.out.println("Enter first number: ");
            int iNo1=sobj.nextInt();
            System.out.println("Enter second number: ");
            int iNo2=sobj.nextInt();
            float fRet=divide(iNo1,iNo2);
            System.out.println("Division is: "+fRet);
        }
        catch(InputMismatchException eobj)
        {
            System.out.println("Please enter integers only.");  
        }
        catch(ArithmeticException eobj)
        {
            System.out.println("Error: "+eobj.getMessage());
        }
        catch(Exception eobj)
        {
            System.out.println("Error: "+eobj.getMessage());
        }
    }
}