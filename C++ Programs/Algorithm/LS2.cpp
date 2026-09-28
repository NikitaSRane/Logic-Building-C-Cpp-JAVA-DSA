#include<iostream>
using namespace std;

class ArrayX
{
    public:
    int iSize;
    int *ptr;

    ArrayX(int iNo)
    {
        iSize=iNo;
        ptr=new int[iSize];
    }

    ~ArrayX()
    {
        delete []ptr;
    }
    void Accept()
    {
        int iCnt=0;

        cout<<"Enter "<<iSize<<" elements: "<<endl;
        for(iCnt=0;iCnt<iSize;iCnt++)
        {
            cin>>ptr[iCnt];
        }
    }

    void Display()
    {
        int iCnt=0;

        cout<<"Elements are: "<<endl;
        for(iCnt=0;iCnt<iSize;iCnt++)
        {
            cout<<ptr[iCnt]<<endl;
        }
    }
};

int main()
{
    int iValue=0;

    cout<<"Enter number of elements: ";
    cin>>iValue;

    ArrayX *lobj=new ArrayX(iValue); // object crated dynamically
    lobj->Accept();
    lobj->Display();

    ArrayX sobj(iValue); // object create statically
    sobj.Accept();
    sobj.Display();

    delete lobj;

    return 0;
}