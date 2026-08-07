import java.util.*;

class Program694
{
    public static void main(String args[])
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter number of rows:");
        int No1=sobj.nextInt();

        System.out.println("Enter number of columns:");
        int No2=sobj.nextInt();

        int Arr[][]=new int[No1][No2];

        System.out.println("Please enter the data: ");

        int i=0,j=0;

        for(i=0;i<No1;i++) // traverse row
        {
            for(j=0;j<No2;j++) // traverse columns
            {
                Arr[i][j]=sobj.nextInt();// values kept in matrix
            }
        }

        System.out.println("Elements from matrix:");
        for(i=0;i<No1;i++) // traverse row
        {
            for(j=0;j<No2;j++) // traverse columns
            {
                System.out.print(Arr[i][j]+"\t");// Display values of matrix
            }
            System.out.println();
        }

    }
}