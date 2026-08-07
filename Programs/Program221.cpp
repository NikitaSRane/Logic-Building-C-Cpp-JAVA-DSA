#include<iostream>
using namespace std;

class ArrayX
{
    private:
        int *Arr;
        int iSize;

    public:
        ArrayX(int No)
        {
            iSize=No;
            Arr=new int[iSize];
        }

        ~ArrayX()
        {
            delete []Arr;
        }

        void Accept() // 
        {   
            int i=0;
            cout<<"Enter the elements:"<<endl;

            for(i=0;i<iSize;i++)
            {
                cin>>Arr[i];
            }
        }
        void Display() 
        {   
            int i=0;
            cout<<"Elements are:"<<endl;

            for(i=0;i<iSize;i++)
            {
                cout<<Arr[i]<<endl;
            }
        }

        void CalculateDigits()
        {
            int i=0;
            int iCount=0;

            for(i=0;i<iSize;i++)
            {

                while(Arr[i] != 0)
                {
                    iCount++;
                    Arr[i]= Arr[i] / 10;
    
                }
                cout<<Arr[i]<<" Contains "<<iCount<<" digits"<<endl;
                iCount=0;

            }
        }

};

int main()
{

    int iLength=0;
    float fRet=0.0f;

    cout<<"enter the number of elements that you want to store:"<<endl;
    cin>>iLength;

    ArrayX *aobj =new ArrayX(iLength); // dynamic memory allocation

    aobj->Accept();

    aobj->CalculateDigits();
    
    delete aobj;

    return 0;
}