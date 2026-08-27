import java.util.*;

class Program4
{
    public static char ConvertCase(char cValue)
    {
        if((cValue >= 'A')&&(cValue <= 'Z'))
        {
            cValue=(char)(cValue+32);
        }
        else if((cValue >= 'a')&&(cValue <= 'z'))
        {
            cValue=(char)(cValue-32);
        }
        else
        {
            throw new IllegalArgumentException("Please enter alphabet characters only.");
        }
        return cValue;
    }

    public static void main(String args[])
    {
        try(Scanner sobj=new Scanner(System.in))
        {
            System.out.println("Enter character: ");
            char cletter=sobj.next().charAt(0);

            char cRet=ConvertCase(cletter);
            System.out.println("Modified letter after converting case: "+cRet);
        }
        catch(IllegalArgumentException eobj)
        {
            System.out.println("Error: "+eobj.getMessage());
        }
        catch(Exception eobj)
        {
            System.out.println(eobj);
        }
    }
}