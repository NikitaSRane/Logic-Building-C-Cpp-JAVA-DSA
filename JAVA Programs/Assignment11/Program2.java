/*
Input: Enter number of rows:
4
Input:Enter number of columns:
5
Output:
1       3       5       7       9
2       4       6       8       10
1       3       5       7       9
2       4       6       8       10

 */

import java.util.*;

class Program2
{
    public static void DisplayPattern(int iRow, int iCol)
    {
        for(int i=1;i<=iRow;i++)
        {
            int iNo=1;
            for(int j=1;j<=iCol;j++,iNo++)
            {
                if(i % 2 == 0)
                {
                    if(iNo % 2 != 0)
                    {
                        iNo++;
                    }
                    if(iNo % 2 == 0)
                    {
                        System.out.print(iNo+"\t");
                    }
                }
                else
                {
                    if(iNo % 2 == 0)
                    {
                        iNo++;
                    }
                    if(iNo % 2 != 0)
                    {
                        System.out.print(iNo+"\t");
                    }
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