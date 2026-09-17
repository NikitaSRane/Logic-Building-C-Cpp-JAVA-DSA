    // bubble sort algorithm semi-optimized code

    import java.util.*;

    public class Program3{
        
        public static void bubbleSort(ArrayX aObj)
        {
            // 52 34 12 69 30 unsorted array

            // compare adjacent element and swap

            for(int i=0;i<aObj.iSize;i++)
            {
                for(int j=0;j<aObj.iSize-1-i;j++) // not checks sorted elements
                {
                    if(aObj.Arr[j] > aObj.Arr[j+1])
                    {
                        // swap logic
                        int temp=aObj.Arr[j];
                        aObj.Arr[j]=aObj.Arr[j+1];
                        aObj.Arr[j+1]=temp;
                    }
                }
                System.out.println("\nArray after pass "+i);
                aObj.display();
            }

        }
        public static void main(String args[])
        {
            try(Scanner sObj=new Scanner(System.in))
            {
                System.out.println("Enter number of length: ");
                int ilength=sObj.nextInt();

                ArrayX aObj=new ArrayX(ilength);
                aObj.accept(sObj); 
                bubbleSort(aObj);
            }
            catch(Exception eObj)
            {
                System.out.println(eObj);
            }
            
        }
    }
