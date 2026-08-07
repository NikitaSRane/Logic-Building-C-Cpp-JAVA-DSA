import java.util.*;

class Program251
{
    public static int countCapital(String str)
    {
        char Arr[]=str.toCharArray();
        int iCount=0;

        for(int i=0; i<Arr.length;i++)
        {
            if((Arr[i]>='A')&&(Arr[i]<='Z'))
            {
                iCount++;
            }
        }
        return iCount;
    }

    public static void main(String args[])
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter your name: ");
        String name=sobj.nextLine();

        int iRet=0;

        iRet=countCapital(name);

        System.out.println("Number of capital characters are: "+iRet);

    }
}