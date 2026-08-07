import java.util.*;

class Program618
{
    public static void main(String args[])
    {
        Scanner sobj=new Scanner(System.in);
        System.out.println("Enter string: ");
        String str=sobj.nextLine();

        System.out.println("String before replacement "+str);

        str=str.replaceAll("a","z");

        System.out.println("String after replacement "+str);

    }
}