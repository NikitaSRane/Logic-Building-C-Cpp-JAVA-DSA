
import java.util.*;

class Program634
{
    public static void main(String args[])
    {
        Scanner sobj=new Scanner(System.in);
        System.out.println("Enter string: ");

        str=str.trim();
        str=str.replaceAll("\\s+"," ");

        String Arr[]=str.split(" ");

        StringBuffer temp=null;

        for(String s:Arr)
        {
            temp=new StringBuffer(s);
            temp=temp.reverse();

            System.out.println(temp);
        }
    }
}