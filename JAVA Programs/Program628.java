import java.util.*;

class Program628
{
    public static void main(String args[])
    {
        Scanner sobj=new Scanner(System.in);
        System.out.println("Enter string: ");
        String str=sobj.nextLine();

        str=str.trim();
        str=str.replaceAll("\\s+"," ");
        String Arr[]=str.split(" ");

        int i=0, iMax=0;
        String maxstr=null;
        for(i=0;i<Arr.length;i++)
        {
            if(Arr[i].length()> iMax)
            {
                iMax=Arr[i].length();
                maxstr=Arr[i];
            }
        }
        System.out.println("largest word is: "+maxstr);
        System.out.println("largest length of string is: "+iMax);

    }
}