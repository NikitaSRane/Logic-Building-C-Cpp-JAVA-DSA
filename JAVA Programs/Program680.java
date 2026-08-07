import java.util.*;

class Program680
{
    public static void main(String args[])
    {
        Scanner sobj=new Scanner(System.in);
        System.out.println("Enter the string: ");
        String str=sobj.nextLine();

        char Arr[]=str.toCharArray();

        for(char ch : Arr)
        {
            System.out.println(ch);
        }
    }
}