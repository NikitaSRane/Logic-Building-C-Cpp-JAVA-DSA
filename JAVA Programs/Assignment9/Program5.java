/*
Input:

Enter number of rows:
4
Enter number of columns:
5

Output:

1       1       1       1       1
2       2       2       2       2
3       3       3       3       3
4       4       4       4       4

*/


import java.util.*;

class Program5
{
    public static void DisplayPattern(int iRow, int iCol)
    {
        for(int i=1;i<=iRow;i++)
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