// Check number is palindrome or not?
// reverse number is equal to number 

import java.util.*;

class Program5
{

    public static boolean isPalindrome(int iValue) 
    {   
        if(iValue < 0)
        {
            return false;
        }
        
        int iNo=iValue; 
        int iRev=0;
        while(iValue != 0)  
        {
            int iDigit=iValue % 10; 
            iRev=iRev*10+iDigit; 
            //System.out.println("Reverse"+iRev);
            iValue=iValue / 10; 
        }   
        return iNo==iRev;
    }
    
    public static void main(String args[])
    {
        try(Scanner sObj=new Scanner(System.in))
        {
            System.out.println("Enter number: ");
            int iNo=sObj.nextInt();
            boolean bRet=isPalindrome(iNo);
            if(bRet)
            {
                System.out.println("Number is palindrome");
            }
            else
            {
                System.out.println("Number is not palindrome.");
            }
        }
        catch(Exception eObj)
        {
            System.out.println(eObj);
        }
    }
}