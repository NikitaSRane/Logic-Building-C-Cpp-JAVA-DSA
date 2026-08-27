import java.util.*;

class Program1
{
    public static int MultFact(int iValue)
    {
        if(iValue < 0)
        {
            iValue =-iValue;
        }
        if(iValue == 0)
        {
            throw new IllegalArgumentException("Zero does not have factors.");
        }

        int iMult=1;

        for(int iCnt=1;iCnt<= iValue/2;iCnt++)
        {
            if(iValue % iCnt == 0)
            {
                iMult=iMult*iCnt;
            }
        }
        return iMult;
    }
    public static void main(String args[])
    {
        try(Scanner sobj=new Scanner(System.in))
        {
            System.out.println("Enter number: ");
            int iNo=sobj.nextInt();
            int iRet=MultFact(iNo);
            System.out.println("Multiplication of factors is: "+iRet);  
        }
        catch(InputMismatchException eobj)
        {
            System.out.println("Input Error: Enter only integers.");
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