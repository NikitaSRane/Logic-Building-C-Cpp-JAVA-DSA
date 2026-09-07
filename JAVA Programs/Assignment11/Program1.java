/*
Input: Enter number of rows:
4
Input:Enter number of columns:
5
Output:
1       2       3       4       5
6       7       8       9       1
2       3       4       5       6
7       8       9       1       2
 */

import java.util.*;

class Program1
{
    public static void DisplayPattern(int iRow, int iCol)
    {
        int iNo=1;
        for(int i=1;i<=iRow;i++)
        {
            for(int j=1;j<=iCol;j++,iNo++)
            {
                if(iNo>9)
                {
                    iNo=1;
                }
                System.out.print(iNo+"\t");
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