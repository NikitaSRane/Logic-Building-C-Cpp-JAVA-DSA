import java.util.*;

class Program688
{
    public static void main(String args[])
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter string:");
        String str=sobj.nextLine();

        str=str.trim();
        str=str.replaceAll("\\s+"," ");

        String Arr[]=str.split(" ");

        for(String a:Arr)
        {
            System.out.println(a);
        }
    }
}