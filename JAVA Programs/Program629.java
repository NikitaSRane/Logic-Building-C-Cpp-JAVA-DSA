import java.util.*;

class Program629
{
    public static void main(String args[])
    {
        Scanner sobj=new Scanner(System.in);
        System.out.println("Enter string: ");
        String str=sobj.nextLine();

        System.out.println("Enter character: ");
        String s=sobj.nextLine();

        Char ch=s.charAt(0);

        System.out.println("Entered character is:"+ch);
    }
}