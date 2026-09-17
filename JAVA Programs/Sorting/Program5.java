    // bubble sort efficient algorithm optimized code
    // Best Case: O(N) already sorted 1 2 3 4 5
    // Worst Case: O(N^2) sorted in reverse order   5 4 3 2 1
    // Average case: O(N^2) 

    import java.util.*;

    public class Program5{
        
        public static void bubbleSort(ArrayX aObj)
        {
            // 52 34 12 69 30 unsorted array

            // compare adjacent element and swap

            for(int i=0;i<aObj.iSize-1;i++) // optimized outer loop
            {
                boolean swapped=false; // reset

                for(int j=0;j<aObj.iSize-1-i;j++) // not checks sorted elements optimized inner loop
                {
                    if(aObj.Arr[j] > aObj.Arr[j+1])
                    {
                        // swap logic
                        int temp=aObj.Arr[j];
                        aObj.Arr[j]=aObj.Arr[j+1];
                        aObj.Arr[j+1]=temp;

                        swapped=true; // swap occured 
                    }
                }

                if(!swapped) // no swap. then stop early.
                {
                    System.out.print("Array is already sorted.");
                    break;
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
