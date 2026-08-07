#include<iostream>
using namespace std;

class ArrayX
{
    public:
    int *Arr;
    int isize;

    ArrayX(int Value)
    {
        this->isize=Value;
        this->Arr=new int[isize];
    }
    void Accept()
    {
        int i=0;
        cout<<"Enter the elements: \n";

        for(i=0;i<isize;i++)
        {
            cin>>Arr[i];
        }
    }

    void Display()
    {
        int i=0;
            
        cout<<"Entered elements are: \n";
        for(i=0;i<isize;i++)
        {
            cout<<Arr[i]<<endl;
        }
    }
};



int main()
{
    int *ptr=NULL;
    int ilength=0;

    cout<<"Enter the number of elements: "<<endl;
    cin>>ilength;

    ArrayX aobj(ilength);

    aobj.Accept();
    aobj.Display();

    return 0;
}