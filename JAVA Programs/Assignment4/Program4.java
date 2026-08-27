import java.util.*;

class Program4
{
    public static int SumNonFactors(int iValue)
    {
        if(iValue == 0)
        {
            throw new IllegalArgumentException("Zero does not have factors.");
        }
        if(iValue < 0)
        {
            iValue=-iValue;
        }
        
        int iSum=0;
        for(int iCnt=1;iCnt<iValue;iCnt++)
        {
            if(iValue % iCnt != 0)
            {
                iSum=iSum+iCnt;
            }
        }
        return iSum;
    }
    public static void main(String args[])
    {
        try(Scanner sobj=new Scanner(System.in))
        {
            System.out.println("Enter number: ");
            int iNo=sobj.nextInt();

            int iRet=SumNonFactors(iNo);
            System.out.println("Sum of non factors are: "+iRet);
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