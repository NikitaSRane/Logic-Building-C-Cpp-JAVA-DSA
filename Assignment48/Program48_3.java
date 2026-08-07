// Write a program which accept matrix and return largest number from both the diagonals.
// Input:
/*
    3   2   5   9
    4   3   2   2
    8   4   1   9
    3   9   7   5
 */

// Output: 9

import java.util.*;

class Matrix
{
    public int row;
    public int col;
    public int No;
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
    // Function Name:  MaxDiagonal
    // Description: Returns maximum element from both diagonals.
    // Input Parameter: None
    // Return Value: Integer
    // Author: Nikita Sagar Rane
    // Date:27/07/2024
    //
    ///////////////////////////////////////////////

    public int MaxDiagonal()
    {
        int iMax=0;
        int i=0,j=0;
        iMax=Arr[i][j];


        for(i=0; i< row; i++)
        {
            for(j=0; j<col; j++)
            {
                if((i==j) || (i+j == row-1))
                {
                    if(Arr[i][j] > iMax)
                    {
                        iMax=Arr[i][j];
                    }
                }
            }
        }
        return iMax;
        
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

class Program48_3
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
        System.out.println("Maximum element from diagonal of matrix is "+mobj.MaxDiagonal());

        mobj=null;

        System.gc();

    }
}


