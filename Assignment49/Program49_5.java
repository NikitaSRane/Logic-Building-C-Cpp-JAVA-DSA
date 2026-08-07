// Write a program which accept matrix from user and check whether the matrix is sparse matrix or not.
// sparse matrix is a matrix with the majority of its elements equal to zero.
// Input:
/*
    1   0   3   0
    0   6   0   0
    0   0   1   0
    9   0   0   9
 */

// Output: True


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
    // Date:29/07/2024
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
    // Date:29/07/2024
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
    // Function Name:  CheckSparse
    // Description:check whether the matrix is sparse matrix or not
    // Input Parameter: None
    // Return Value: Boolean
    // Author: Nikita Sagar Rane
    // Date:29/07/2024
    //
    ///////////////////////////////////////////////


    public Boolean CheckSparse()
    {
        int iCount=0, iCountzero=0;

        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col ;j++)
            {
                if(Arr[i][j] == 0)
                {
                    iCountzero++;
                }
                if(Arr[i][j] != 0)
                {
                    iCount++;
                }
            }
        }
        if(iCountzero > iCount)
        {
            return true;
        }
        else
        {
            return false;
        }
        
    }

    ///////////////////////////////////////////////
    //
    // Function Name:  finalize
    // Description: It is used to deallocate the resources
    // Input Parameter: None
    // Return Value: None
    // Author: Nikita Sagar Rane
    // Date:29/07/2024
    //
    ///////////////////////////////////////////////

    protected void finalize()
    {
        System.out.println("Garbage collector will collect the memory of an object");
        Arr=null;
    }
}

class Program49_5
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
        Boolean bRet=mobj.CheckSparse();
        if(bRet == true)
        {
            System.out.println("Matrix is sparse matrix.");
        }
        else
        {
            System.out.println("Martix is not sparse matrix.");
        }
        mobj=null;

        System.gc();

    }
}


