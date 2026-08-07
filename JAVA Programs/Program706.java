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

    public void RowSum()
    {
        int i=0,j=0, iSum=0;

        for(i=0,iSum=0;i<row;i++) // traverse row
        {
            for(j=0;j<col;j++)
            {
                iSum=iSum+Arr[i][j];
            }
            System.out.println("Sum of Row "+(i+1)+" is "+iSum);
        }
    }

    public int DiagonalSum() // way 2 
    {
        int i=0,j=0, iSum=0;

        if(row != col)
        {
            System.out.println("Unable to perform summation of  diagonal elements because matrix is not square matrix");
            return -1;
        }
        else
        {
            for(i=0;i<row;i++) // traverse row
            {
                for(j=i;((j<col) && (i == j));j++)
                {
                    iSum=iSum+Arr[i][j];
                }
            }
            return iSum;
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

    public void EvenOddSum()
    {
        int i=0,j=0, EvenSum=0, OddSum=0;

        for(i=0;i<row;i++) // traverse row
        {
            for(j=0;j<col;j++) // traverse columns
            {
                if(Arr[i][j] % 2 == 0)
                {
                    EvenSum=EvenSum+Arr[i][j];
                }
                else
                {
                    OddSum=OddSum+Arr[i][j];

                }
            }
        }
        System.out.println("Summation of Even elements is: "+EvenSum);
        System.out.println("Summation of Odd elements is: "+OddSum);
    }


    public void UpdateMatrix()
    {
        int i=0,j=0;

        for(i=0;i<row;i++) // traverse row
        {
            for(j=0;j<col;j++) // traverse columns
            {
                if(Arr[i][j] % 5 == 0) // element divisible by 5 
                {
                    Arr[i][j]=0; // update with 0
                }
            }
        }

    }

    public void UpdateMatrixEven()
    {
        int i=0,j=0;

        for(i=0;i<row;i++) // traverse row
        {
            for(j=0;j<col;j++) // traverse columns
            {
                if(Arr[i][j] % 2 == 1) // element is odd
                {
                    Arr[i][j]=Arr[i][j]+1; // update by adding 1
                }
            }
        }

    }

    public void AdditionDigits()
    {
        int i=0,j=0, iSum=0, iDigit=0, iNo=0;

        for(i=0;i<row;i++) // traverse row
        {
            for(j=0;j<col;j++) // traverse columns
            {
                iNo=Arr[i][j];
                while(iNo != 0)
                {
                    iDigit=iNo % 10;
                    iSum=iSum+iDigit;
                    iNo=iNo / 10;
                }
                Arr[i][j]=iSum;
                iSum=0;
            }
            //System.out.println();
        }
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

    protected void finalize()
    {
        System.out.println("Garbage collector is collecting the memory of an object.");
        Arr=null;
    }
}

class Program706
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
        mobj.RowSum();
        iRet=mobj.DiagonalSum();
        System.out.println("Sum of diagonal elements are "+iRet);
        mobj.EvenOddSum();
        mobj.AdditionDigits();
        mobj.Display();
        mobj.UpdateMatrixEven();
        mobj.Display();
        mobj=null;
        System.gc();
    }
}