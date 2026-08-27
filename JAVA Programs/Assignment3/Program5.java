import java.util.*;

class Program5
{
    public static String checkVowel(char cValue) // case in-sensitive
    {

        if((cValue >= 'A')&&(cValue <= 'Z')) // convert case to lower
        {   
            cValue=(char)(cValue+32);
        }
        else if(!((cValue >= 'a')&&(cValue <='z'))) // other than lower 
        {
            throw new IllegalArgumentException("Please enter character only.");
        }
    
       return switch(cValue){
        case 'a','e','i','o','u'->"Vowel";
        default ->"Not Vowel";
       };           // switch expression java14+
    }

    public static void main(String args[])
    {
        try(Scanner sobj=new Scanner(System.in))
        {
            System.out.println("Enter character: ");
            char cletter=sobj.next().charAt(0);

            String cRet=checkVowel(cletter);
            System.out.println(cRet);
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