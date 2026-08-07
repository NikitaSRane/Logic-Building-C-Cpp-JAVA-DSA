import java.util.*;

class Program621
{
    public static void main(String args[])
    {
        Scanner sobj=new Scanner(System.in);
        System.out.println("Enter string: ");
        String str=sobj.nextLine();

        String Arr[]=str.split(" ");
        System.out.println("Words from the string are: ");
        int i=0;
        
        for(i=0;i<Arr.length;i++)
        {
            System.out.println(Arr[i]);
        }
    }
}