import java.util.*;

class Arithmetic
{
    public int iNo1;
    public int iNo2;

    public Arithmetic(int A, int B)
    {
        iNo1=A;
        iNo2=B;
    }
    public int Addition()
    {
        int iAns=0;

        iAns=iNo1+iNo2;

        return iAns;
    }
}

class Program193
{
    public static void main(String args[])
    {
        int iValue1=0, iValue2=0, iRet=0;
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter first number :");
        iValue1=sobj.nextInt();

        System.out.println("Enter second number :");
        iValue2=sobj.nextInt();

        Arithmetic aobj=new Arithmetic(iValue1,iValue2);
        iRet=aobj.Addition();

        System.out.println("Addition is "+iRet);
    }
}