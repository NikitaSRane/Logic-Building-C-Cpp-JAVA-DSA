import java.util.*;

class Program620
{
    public static void main(String args[])
    {
        Scanner sobj=new Scanner(System.in);
        System.out.println("Enter string: ");
        String str=sobj.nextLine();

        str=str.trim();
        str=str.replaceAll("\\s+"," "); // s=space, +=onwards
        
        char Arr[]=str.toCharArray();

        int iCnt=0, i=0;

        for(i=0;i<Arr.length;i++)
        {
            if(Arr[i]==' ')
            {
                iCnt++;
            }
        }

        System.out.println("Number of words are:"+(iCnt+1));
    }
}