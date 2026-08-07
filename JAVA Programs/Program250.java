import java.util.*;

class Program250
{
    public static void main(String args[])
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter your name: ");
        String name=sobj.nextLine();

        char Arr[]=name.toCharArray();

        System.out.println("Array length is :"+Arr.length);  // property
        System.out.println("string length is :"+name.length()); // method


    }
}