// Display number in alphabet 
// trailing 0 consider
// Input: 123
// Output: ONE TWO THREE
// Input: 200
// Output: TWO ZERO ZERO


import java.util.*;

class Program4
{
    public static void display(int iValue) // 123
    {
        String[] str={"ZERO ","ONE ","TWO ","THREE ","FOUR ","FIVE ","SIX ","SEVEN ","EIGHT ","NINE "};
        int iNo=0;

        // if value is less than 0
        if(iValue < 0)
        {
            //System.out.print("MINUS ");
            iValue=-iValue;
        }
        if(iValue == 0)
        {
            System.out.print(str[iValue]);
        }
        else
        {
            int temp=iValue;
            int iCount=0;
            // count only trailing zeros.
            while(temp != 0)
            {
                if(temp % 10 == 0)
                {
                    iCount++;
                }
                else
                {
                    break;
                }
                temp=temp / 10;
            }
            //System.out.println("Count Zero"+iCount);

            //Reverse entire number  321
            int iRev=0;
            while(iValue != 0)
            {
                iNo=iValue % 10;
                iRev=(iRev*10)+iNo;
                iValue=iValue / 10;
            }
            
            //System.out.println("Reverse"+iRev);

            // Display ONE TWO THREE

                while(iRev != 0)
                {
                iNo=iRev % 10;
                System.out.print(str[iNo]);
                iRev=iRev / 10;
                }

            if(iCount > 0)
            {
                for(int iCnt=1; iCnt <=iCount;iCnt++)
                {
                    System.out.print(str[0]);
                }
            }
            
        }
    }

    public static void main(String args[])
    {
        try(Scanner sobj=new Scanner(System.in))
        {
            System.out.println("Enter number:");
            int iNo=sobj.nextInt();
            display(iNo);
        }
        catch(InputMismatchException eobj)
        {
            System.out.println("Enter integer only.");
        }
        catch(Exception eobj)
        {
            System.out.println(eobj);
        }
    }
}