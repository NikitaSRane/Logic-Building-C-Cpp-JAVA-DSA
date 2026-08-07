import java.util.*;

class Program685
{
    public static void main(String args[])
    {
        Scanner sobj=new Scanner(System.in);
        System.out.println("Enter the string: ");
        String str=sobj.nextLine();

        char Arr[]=str.toCharArray();

        HashMap <Character,Integer>hobj=new HashMap<Character,Integer>();
        int frequency=0;

        for(char ch :Arr)
        {
            if(hobj.containsKey(ch))
            {
                frequency=hobj.get(ch);
                hobj.put(ch,frequency+1);
            }
            else
            {
                hobj.put(ch,1);
            }   
        }

        Set <Character>setobj=hobj.keySet();

        int iMax=0;
        char ch='\0';

        for(char data : setobj)
        {
            if(hobj.get(data) >iMax)
            {
                iMax=hobj.get(data);
                ch=data;
            }
        }    
        System.out.println(ch+" occurs maximum number of times in string ie "+iMax+" times");  
    }
    //put(key,value)
    //get(key)
    //containsKey(key)
}