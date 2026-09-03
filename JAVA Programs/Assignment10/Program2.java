/*
Input: Enter number of rows:
4
Input:Enter number of columns:
5
Output:
A       B       C       D       E
a       b       c       d       e
A       B       C       D       E
a       b       c       d       e
 */

import java.util.*;

class Program2
{
    public static void DisplayPattern(int iRow, int iCol)
    {
        for(int i=1;i<=iRow;i++)
        {
            char c='A';
            for(int j=1;j<=iCol;j++,c++)
            {
                if(i % 2 == 0)
                {
                    char cValue=(char)((int)c+32);
                    System.out.print(cValue+"\t");
                }
                else
                {
                    System.out.print(c+"\t");
                }
            }
            System.out.println();
        }
    }
    public static void main(String args[])
    {
        try(Scanner sObj=new Scanner(System.in))
        {
            System.out.println("Enter number of rows: ");
            int iNo1=sObj.nextInt();
            System.out.println("Enter number of columns: ");
            int iNo2=sObj.nextInt();
            DisplayPattern(iNo1,iNo2);
        }
        catch(Exception eObj)
        {
            System.out.println(eObj);
        }
    }
}