import java.util.*;

class Matrix
{
    public int row;
    public int col;
    public int Arr[][];

    public Matrix(int iNo1, int iNo2)
    {
        row=iNo1;
        col=iNo2;
        Arr=new int[row][col];
    }

    public void Accept()
    {
        System.out.println("Please enter the data: ");
        Scanner sobj=new Scanner(System.in);
        int i=0,j=0;

        for(i=0;i<row;i++) // traverse row
        {
            for(j=0;j<col;j++) // traverse columns
            {
                Arr[i][j]=sobj.nextInt();// values kept in matrix
            }
        }

    }

    public void Display()
    {
        System.out.println("Elements from matrix:");
        for(int i=0;i<row;i++) // traverse row
        {
            for(int j=0;j<col;j++) // traverse columns
            {
                System.out.print(Arr[i][j]+"\t");// Display values of matrix
            }
            System.out.println();
        }
    }
}

class Program695
{
    public static void main(String args[])
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter number of rows:");
        int No1=sobj.nextInt();

        System.out.println("Enter number of columns:");
        int No2=sobj.nextInt();
        
        Matrix mobj=new Matrix(No1,No2);
        mobj.Accept();
        mobj.Display();

    }
}