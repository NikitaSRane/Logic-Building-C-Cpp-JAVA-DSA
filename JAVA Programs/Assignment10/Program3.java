/*
Input: Enter number of rows:
4
Input:Enter number of columns:
5
Output:
A       A       A       A       A
B       B       B       B       B
C       C       C       C       C
D       D       D       D       D
 */

import java.util.*;

class Program3
{
    public static void DisplayPattern(int iRow, int iCol)
    {
        char c='A';
        for(int i=1;i<=iRow;i++,c++)
        {
            for(int j=1;j<=iCol;j++)
            {
                System.out.print(c+"\t");
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