import java.util.*;

class Program200
{
    public static int Difference(int iNo)
    {
        int iCnt=0, iSum=0, iSumN=0;

        for(iCnt=1;iCnt<iNo; iCnt++) // Factors
        {
            if((iNo % iCnt)==0)
            {
                iSum=iSum+iCnt;
            }
            else                      // Non-factors
            {
                iSumN=iSumN+iCnt;
            }
        }
        return iSumN-iSum;
    }

    public static void main(String args[])
    {
        Scanner sobj=new Scanner(System.in);

        int iValue=0, iRet=0; 

        System.out.println("Enter number: ");
        iValue=sobj.nextInt();

        iRet=Difference(iValue);
        System.out.println("Difference of sum of non-factors and factors is: "+iRet);
    }
}
