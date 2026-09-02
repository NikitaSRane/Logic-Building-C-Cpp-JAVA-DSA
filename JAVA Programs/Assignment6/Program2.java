// Display digits in alphabet
// Input: 2
// Output: TWO

import java.util.*;

class Program2
{
    public static String display(int iValue)
    {
        String[] str={"ZERO ","ONE ","TWO ","THREE ","FOUR ","FIVE ","SIX ","SEVEN ","EIGHT ","NINE "};

        if(iValue < 0)
        {
            System.out.print("MINUS ");
            iValue=-iValue;
        }
    
        if((iValue >=0)&&(iValue <=9))
        {
            return str[iValue];
        }
    
        return "INVALID";
    }

    public static void main(String args[])
    {
        try(Scanner sobj=new Scanner(System.in))
        {
            System.out.println("Enter number:");
            int iNo=sobj.nextInt();
            String sRet=display(iNo);
            System.out.println(sRet);
        }
        catch(InputMismatchException eobj)
        {
            System.out.println("Enter integer only.");
        }
        catch(Exception eobj)
        {
            System.out.println(eobj);
        }
    }
}