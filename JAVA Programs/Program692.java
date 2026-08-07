import java.util.*;

class Program692
{
    public static void main(String args[])
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter string:");
        String str=sobj.nextLine();

        str=str.trim();
        str=str.replaceAll("\\s+"," ");
        int frequency=0;
        String Arr[]=str.split(" ");

        HashMap <String,Integer>hobj=new HashMap<String,Integer>();

        for(String a:Arr)
        {
            if(hobj.containsKey(a)) // string is already present
            {
                frequency=hobj.get(a);
                hobj.put(a,frequency+1);
            }
            else
            {
                hobj.put(a,1);
            }
        }
        int iMax=0;
        String temp=null;
        Set <String>setobj=hobj.keySet();

        for(String s:setobj)
        {
            if(hobj.get(s) > iMax)
            {
                iMax=hobj.get(s);
                temp=s;
            }
        }
        System.out.println(temp+" word is present in maximum number of times in string ie"+iMax+" times");
    }
}