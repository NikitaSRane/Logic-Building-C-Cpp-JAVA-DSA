//Displya and Count capital characters

import java.util.*;

class Program589
{
    public static void main(String args[])
    {
        Scanner sobj=new Scanner(System.in);
        System.out.println("Enter your name: ");
        String str=sobj.nextLine();

        System.out.println("Length of string is: "+str.length());
        int iCnt=0;

        for(int i=0;i<str.length();i++)
        {
            if(str.charAt(i)>='A' && str.charAt(i)<='Z')
            {
                iCnt++;
                System.out.println(str.charAt(i));
            }
        }
        System.out.println("Capital characters are: "+iCnt);
    }
}