    // Selection sort algorithm
    // Best Case: o(N^2) even if sorted
    // Worst Case: o(N^2)
    // Average case: o(N^2)

    import java.util.*;

    public class Program6{
        
        public static void selectionSort(ArrayX aObj)
        {
            // 52 34 12 69 30 unsorted array

            // find minimum element from unsorted array and swap with first element of unsorted array
            int iMin=0;
            int temp=0;

            for(int i=0; i<aObj.iSize-1; i++)
            {
                iMin=i;
                // find smallest element with unsorted array
                for(int j=i+1;j<aObj.iSize;j++)
                {
                    if(aObj.Arr[j] < aObj.Arr[iMin])
                    {
                        iMin=j;
                    }

                }
                // swap element

                temp=aObj.Arr[iMin];
                aObj.Arr[iMin]=aObj.Arr[i];
                aObj.Arr[i]=temp;
            }
            aObj.display();
        }
        public static void main(String args[])
        {
            try(Scanner sObj=new Scanner(System.in))
            {
                System.out.println("Enter number of length: ");
                int ilength=sObj.nextInt();

                ArrayX aObj=new ArrayX(ilength);
                aObj.accept(sObj); 
                selectionSort(aObj);
            }
            catch(Exception eObj)
            {
                System.out.println(eObj);
            }
            
        }
    }
