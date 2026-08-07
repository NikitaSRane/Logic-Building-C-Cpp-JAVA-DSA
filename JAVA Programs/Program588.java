//Display each character of string

import java.util.*;

class Program588
{
    public static void main(String args[])
    {
        Scanner sobj=new Scanner(System.in);
        System.out.println("Enter your name: ");
        String str=sobj.nextLine();

        System.out.println("Length of string is: "+str.length());

        for(int i=0;i<str.length();i++)
        {
            System.out.println(str.charAt(i)); // for specific character
        }
    }
}