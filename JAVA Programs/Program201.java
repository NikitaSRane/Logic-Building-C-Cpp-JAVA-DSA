import java.util.*;

class Program201
{
    public static int CountDigits(int iNo)
    {
        int iCount=0;

        while(iNo != 0)
        {
            iCount++;
            iNo=iNo / 10;
        }
        return iCount;
    }

    public static void main(String args[])
    {
        Scanner sobj=new Scanner(System.in);

        int iValue=0, iRet=0; 

        System.out.println("Enter number: ");
        iValue=sobj.nextInt();

        iRet=CountDigits(iValue);
        System.out.println("Number of digits are: "+iRet);
    }
}
