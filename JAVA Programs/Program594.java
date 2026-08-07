import java.util.*;

class Program594
{
    public static void main(String args[])
    {
        // using string
        Scanner sobj=new Scanner(System.in);
        System.out.println("Enter your name");
        String name=sobj.nextLine();

        System.out.println("Entered string is: "+name);
        System.out.println("Length of string is: "+name.length());

        for(int i=0;i<name.length();i++)
        {
            System.out.println(name.charAt(i));

        }

        // by converting string to array of character
        System.out.println("String after converting to character array");
        char Arr[]=name.toCharArray();
        System.out.println(Arr);
        System.out.println("Length of charactr array is: "+Arr.length);
        for(int i=0;i<Arr.length;i++)
        {
            System.out.println(Arr[i]);
        }

    }

}