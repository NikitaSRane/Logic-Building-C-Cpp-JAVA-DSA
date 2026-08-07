//Display and Count digits only

import java.util.*;

class Program592
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
            if(str.charAt(i)>='0' && str.charAt(i)<='9')
            {
                iCnt++;
                System.out.println(str.charAt(i));
            }
        }
        System.out.println("Number of digits are: "+iCnt);
    }
}