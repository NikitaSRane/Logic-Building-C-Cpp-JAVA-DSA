import java.util.Scanner;


class ArrayX
{
    public int Arr[];

    public ArrayX(int No)
    {
        Arr= new int[No];
    }  
    public void Accept()
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter the elements:");
        int i=0;
        for(i=0;i<Arr.length;i++)
        {
            Arr[i]=sobj.nextInt();
        }
    }  
    public void Display()
    {
        System.out.println("Entered elements are:");
        int i=0;
        for(i=0;i<Arr.length;i++)
        {
            System.out.println(Arr[i]);
        }
    }

    public float Average()
    {
        float fAns=0.0f;
        int iSum=0;
        int i=0;

        for(i=0;i<Arr.length;i++)
        {
            iSum=iSum+Arr[i];
        }
        fAns=(float)iSum / (float)Arr.length;
        return fAns;
    }
}

class Program231
{
    public static void main(String args[])
    {
        Scanner sobj=new Scanner(System.in);
        int iSize=0;
        float fRet=0.0f;
    
        System.out.println("Enter number of elements you want to store:");
        iSize=sobj.nextInt();

        ArrayX aobj=new ArrayX(iSize);

        aobj.Accept();
        aobj.Display();

        fRet=aobj.Average();
        System.out.println("Average is: "+fRet);

    }
}