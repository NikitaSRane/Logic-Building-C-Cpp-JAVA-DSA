import java.util.*;

class Program192
{
    public static void main(String args[])
    {
        int iValue1=0, iValue2=0, iRet=0;
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter first number :");
        iValue1=sobj.nextInt();

        System.out.println("Enter second number :");
        iValue2=sobj.nextInt();

        iRet=iValue1+iValue2;

        System.out.println("Addition is "+iRet);
    }
}