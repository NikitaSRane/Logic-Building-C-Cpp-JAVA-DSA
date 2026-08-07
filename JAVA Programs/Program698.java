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

    public int Sum()
    {
        int i=0,j=0, iSum=0;

        for(i=0;i<row;i++) // traverse row
        {
            for(j=0;j<col;j++) // traverse columns
            {
                iSum=iSum+Arr[i][j];
            }
        }
        return iSum;
    }

    public int Maximum()
    {
        int i=0,j=0, iMax=Arr[0][0];

        for(i=0;i<row;i++) // traverse row
        {
            for(j=0;j<col;j++) // traverse columns
            {
                if(Arr[i][j] > iMax)
                {
                    iMax=Arr[i][j];
                }
            }
           
        }
        return iMax;
    }

    public int Minimum()
    {
        int i=0,j=0, iMin=Arr[0][0];

        for(i=0;i<row;i++) // traverse row
        {
            for(j=0;j<col;j++) // traverse columns
            {
                if(Arr[i][j] < iMin)
                {
                    iMin=Arr[i][j];
                }
            }
           
        }
        return iMin;
    }
}

class Program698
{
    public static void main(String args[])
    {
        Scanner sobj=new Scanner(System.in);
        int iRet=0;

        System.out.println("Enter number of rows:");
        int No1=sobj.nextInt();

        System.out.println("Enter number of columns:");
        int No2=sobj.nextInt();
        
        Matrix mobj=new Matrix(No1,No2);
        mobj.Accept();
        mobj.Display();
        iRet=mobj.Sum();
        System.out.println("Summation of elements of matrix is: "+iRet);
        iRet=mobj.Maximum();
        System.out.println("Largest element of matrix is: "+iRet);
        iRet=mobj.Minimum();
        System.out.println("Smallest element of matrix is: "+iRet);

        mobj=null;
    }
}