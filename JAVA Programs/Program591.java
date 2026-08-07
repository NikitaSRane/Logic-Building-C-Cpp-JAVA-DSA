//Count white spaces only

import java.util.*;

class Program591
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
            if(str.charAt(i)==' ')
            {
                iCnt++;
            }
        }
        System.out.println("white spaces are: "+iCnt);
    }
}