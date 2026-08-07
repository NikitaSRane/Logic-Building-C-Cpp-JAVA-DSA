// Write a program which accept matrix from user and display transpose of the matrix.
// Input:
/*
    3   2   5   9
    4   3   2   2
    8   4   1   9
    3   9   7   5
 */

// Output: 
/*
    3   4   8   3
    2   3   4   9
    5   2   1   7
    9   2   9   5
 */

import java.util.*;

class Matrix
{
    public int row;
    public int col;
    public int Arr[][];

    public Matrix(int No1, int No2)
    {
        row=No1;
        col=No2;
        Arr=new int[row][col];
    }

    ///////////////////////////////////////////////
    //
    // Function Name:  Accept
    // Description: Accepts elements from  user
    // Input Parameter: None
    // Return Value: None
    // Author: Nikita Sagar Rane
    // Date:27/07/2024
    //
    ///////////////////////////////////////////////

    public void Accept()
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter the elements:");
        for(int i=0; i< row; i++)
        {
            for(int j=0; j< col; j++)
            {
                Arr[i][j]=sobj.nextInt();

            }
        }
    }

    ///////////////////////////////////////////////
    //
    // Function Name:  Display
    // Description: Display elements of matrix
    // Input Parameter: None
    // Return Value: None
    // Author: Nikita Sagar Rane
    // Date:27/07/2024
    //
    ///////////////////////////////////////////////

    public void Display()
    {
        System.out.println("Elements from matrix are:");

        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                System.out.print(Arr[i][j]+"\t");
            }
            System.out.println();
        }
    }


    ///////////////////////////////////////////////
    //
    // Function Name:  Transpose
    // Description:Interchange the matrix element in transpose matrix
    // Input Parameter: None
    // Return Value: None
    // Author: Nikita Sagar Rane
    // Date:27/07/2024
    //
    ///////////////////////////////////////////////


    public void Transpose()
    {
        int temp=0;
        if(row != col)
        {
            System.out.println("Unable to perform transpose of elements of matrix as matrix is not a square matrix.");
            return;
        }
        else
        {
            for(int i=0;i<row;i++)
            {
                for(int j=i;j<col;j++)
                {
                    if(i != j)
                    {   
                        temp=Arr[i][j];
                        Arr[i][j]=Arr[j][i];
                        Arr[j][i]=temp;
                    }
                }
            }
        }
    }

    ///////////////////////////////////////////////
    //
    // Function Name:  finalize
    // Description: It is used to deallocate the resources
    // Input Parameter: None
    // Return Value: None
    // Author: Nikita Sagar Rane
    // Date:27/07/2024
    //
    ///////////////////////////////////////////////

    protected void finalize()
    {
        System.out.println("Garbage collector will collect the memory of an object");
        Arr=null;
    }
}

class Program49_1
{
    public static void main(String args[])
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter number of rows: ");
        int iNo1=sobj.nextInt();

        System.out.println("Enter number of columns: ");
        int iNo2=sobj.nextInt();

        Matrix mobj=new Matrix(iNo1,iNo2);
        mobj.Accept();
        mobj.Display();
        mobj.Transpose();
        mobj.Display();
        mobj=null;

        System.gc();

    }
}


