// Check number is prime or not?
// prime number is such a number which divisible by only same number
import java.util.*;

class Program1
{
    public static boolean isPrime(int iNo)
    {
        
        if(iNo <= 1) // 0,1 and negative numbers are not prime
        {
            return false;
        }
        
        int iCount=0;  // int iCnt=0;
        for(int iCnt=2;iCnt<=iNo/2;iCnt++)
        {
            if(iNo % iCnt == 0)
            {
                iCount++;   //break; // return false;
            }
        }
        if(iCount > 0) // if(iCnt > iNo/2){ return true;}return false;
        {
            return false;
        }
        return true; 
    }
    
    public static void main(String args[])
    {
        try(Scanner sObj=new Scanner(System.in))
        {
            System.out.println("Enter number: ");
            int iNo=sObj.nextInt();
            boolean bRet=isPrime(iNo);
            if(bRet)
            {
                System.out.println("Number is prime");
            }
            else
            {
                System.out.println("Number is not prime.");
            }
        }
        catch(Exception eObj)
        {
            System.out.println(eObj);
        }
    }
}