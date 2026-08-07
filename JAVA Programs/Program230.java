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
}

class Program230
{
    public static void main(String args[])
    {
        ArrayX aobj=new ArrayX(5);

        System.out.println("Array size is :"+aobj.Arr.length);
        aobj.Accept();
        aobj.Display();
    }
}