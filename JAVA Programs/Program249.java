import java.util.*;

class Program249
{
    public static void main(String args[])
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter your name: ");
        String name=sobj.nextLine();

        int i=0;
        char ch;
        int iCnt=0;

        for(i=0;i<name.length();i++)
        {
            ch=name.charAt(i);

            if((ch >='A')&&(ch <='Z'))
            {
                iCnt++;
            }
        }
        System.out.println("Capital characters are: "+iCnt);
    }
}