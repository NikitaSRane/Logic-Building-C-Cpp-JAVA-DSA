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


    /*
    
    11  22  33  44
    78  89  56  32
    45  12  35  56
    14  96  74  95

    swap row

    78  89  56  32
    11  22  33  44
    14  96  74  95
    45  12  35  56

    
    */ 

    public void swaprow()
    {
        int i=0,j=0, temp=0;    

        for(i= 0; i < iRow-1; i=i+2)
        {
            for(j = 0; j < iCol; j++)
            {
                temp=Arr[i][j];
                Arr[i][j]=Arr[i+1][j];
                Arr[i+1][j]=temp;
            }
        }

    }

    protected void finalize()
    {
        System.out.println("Garbage collector is collecting the memory of an object");        
        Arr=null;
    }

}

class Program612
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
        mobj.swaprow();
        mobj.Dissplay();


        System.gc();
    }
}