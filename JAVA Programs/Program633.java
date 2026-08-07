
import java.util.*;

class Program633
{
    public static void main(String args[])
    {
        Scanner sobj=new Scanner(System.in);
        System.out.println("Enter string: ");
        String str=sobj.nextLine();
        StringBuffer sb=new StringBuffer(str);

        sb=sb.reverse();
        
        System.out.println("String is :"+sb);
    }
}