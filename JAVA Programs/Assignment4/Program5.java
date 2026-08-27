import java.util.*;

class Program5
{
    public static int DiffSumFactNonFact(int iValue)
    {
        if(iValue == 0)
        {
            throw new IllegalArgumentException("Zero does not have factors.");
        }
        if(iValue < 0)
        {
            iValue=-iValue;
        }
        
        int iFSum=0, iNFSum=0;
        for(int iCnt=1;iCnt<iValue;iCnt++)
        {
            if(iValue % iCnt == 0)
            {
                iFSum=iFSum+iCnt;
            }
            else
            {
                iNFSum=iNFSum+iCnt;
            }
        }   
        return iNFSum-iFSum;
    }
    public static void main(String args[])
    {
        try(Scanner sobj=new Scanner(System.in))
        {
            System.out.println("Enter number: ");
            int iNo=sobj.nextInt();

            int iRet=DiffSumFactNonFact(iNo);
            System.out.println("Difference of Sum of  factors and non factors are: "+iRet);
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