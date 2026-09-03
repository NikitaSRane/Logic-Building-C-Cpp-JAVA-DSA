/*
Input: Enter number of rows:
4
Input:Enter number of columns:
5
Output:
4       4       4       4       4
3       3       3       3       3
2       2       2       2       2
1       1       1       1       1
 */

import java.util.*;

class Program4
{
    public static void DisplayPattern(int iRow, int iCol)
    {
        for(int i=iRow;i>=1;i--)
        {
            for(int j=1;j<=iCol;j++)
            {
                System.out.print(i+"\t");
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