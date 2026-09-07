/*
Input: Enter number of rows:
4
Input:Enter number of columns:
5
Output:
1       2       3       4       5
a       b       c       d       e
1       2       3       4       5
a       b       c       d       e
 */

import java.util.*;

class Program3
{
    public static void DisplayPattern(int iRow, int iCol)
    {
        for(int i=1;i<=iRow;i++)
        {
            char cValue='a';
            for(int j=1;j<=iCol;j++,cValue++)
            {
                if(i % 2 == 0)
                {
                    System.out.print(cValue+"\t");
                }
                else
                {
                    System.out.print(j+"\t");
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