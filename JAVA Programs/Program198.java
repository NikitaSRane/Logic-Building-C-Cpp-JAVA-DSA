import java.util.*;

class Program198
{
    public static void main(String args[])
    {
        Scanner sobj=new Scanner(System.in);

        int iValue=0, iCnt=0, iSum=0;

        System.out.println("Enter number: ");
        iValue=sobj.nextInt();

        for(iCnt=1;iCnt<=iValue/2; iCnt++)
        {
            if((iValue % iCnt)==0)
            {
                iSum=iSum+iCnt;
            }
        }
        System.out.println("Summation of factors is: "+iSum);
    }
}
