import java.util.*;

class Program622
{
    public static void main(String args[])
    {
        Scanner sobj=new Scanner(System.in);
        System.out.println("Enter string: ");
        String str=sobj.nextLine();

        String Arr[]=str.split(" ");
        System.out.println("Words from the string are: ");
        
        for(String s:Arr) // for each
        {
            System.out.println(s);
        }
    }
}