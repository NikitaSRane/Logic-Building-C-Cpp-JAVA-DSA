// sum of all elements
import java.util.*;

class Matrix
{
    public int iRow, iCol;
    public int Arr[][];
    
    public Matrix(int A, int B)
    {
        this.iRow = A;
        this.iCol = B;

        Arr = new int[iRow][iCol];
    }

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please enter the data : ");

        int i = 0, j = 0;

        for(i= 0; i < iRow; i++)
        {
            for(j = 0; j < iCol; j++)
            {
                Arr[i][j] = sobj.nextInt();
            }
        }
    }

    public void Dissplay()
    {
        int i = 0, j = 0;

        System.out.println("Elements from the matrix : ");
        
        for(i= 0; i < iRow; i++)
        {
            for(j = 0; j < iCol; j++)
            {
                System.out.print(Arr[i][j]+"\t");
            }
            System.out.println();
        }
    }

    public void EvenOddSum()
    {
        int iSumeven=0,iSumodd=0, i=0,j=0;    

        for(i= 0; i < iRow; i++)
        {
            for(j = 0; j < iCol; j++)
            {
                if(Arr[i][j] % 2 == 0)
                {
                    iSumeven=iSumeven+Arr[i][j];
                }
                else
                {
                    iSumodd=iSumodd+Arr[i][j];

                }
            }
        }
        System.out.println("Addition of even elements are: "+iSumeven);
        System.out.println("Addition of odd elements are: "+iSumodd);

    }

    protected void finalize()
    {
        System.out.println("Garbage collector is collecting the memory of an object");        
        Arr=null;
    }

}

class Program608
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of rows : ");
        int No1 = sobj.nextInt();

        System.out.println("Enter number of columns : ");
        int No2 = sobj.nextInt();

        Matrix mobj = new Matrix(No1,No2);

        mobj.Accept();
        mobj.Dissplay();
        mobj.EvenOddSum();
        mobj=null;

        System.gc();
    }
}