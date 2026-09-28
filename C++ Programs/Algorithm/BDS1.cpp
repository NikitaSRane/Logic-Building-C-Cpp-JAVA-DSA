#include<iostream>
using namespace std;

template <class T>
class ArrayX
{
    public:
    int iSize;
    T *ptr;

    ArrayX(int iNo);
    ~ArrayX();
    void Accept();
    void Display();
    bool LinearSearch(T iNo);
    bool BiDirectionalSearch(T iNo);
   
};

template <class T>
ArrayX<T>::ArrayX(int iNo)
{
    iSize=iNo;
    ptr=new T[iSize];
}

template <class T>
ArrayX<T>::~ArrayX()
{
    delete []ptr;
}

template <class T>
void ArrayX<T>::Accept()
{
    int iCnt=0;

    cout<<"Enter "<<iSize<<" elements: "<<endl;
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        cin>>ptr[iCnt];
    }
}

template <class T>
void ArrayX<T>::Display()
{
    int iCnt=0;

    cout<<"Elements are: "<<endl;
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        cout<<ptr[iCnt]<<endl;
    }
}

template <class T>
bool ArrayX<T>::LinearSearch(T iValue)
{
    int iCnt=0;
    bool bFlag=false;
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(ptr[iCnt] == iValue)
        {
            bFlag=true;
            break;
        }
    }

    return bFlag;
}

template <class T>
bool ArrayX<T>::BiDirectionalSearch(T iValue)
{
    int iStart=0;
    int iEnd=iSize-1;
    bool bFlag=false;

    while(iStart <= iEnd)
    {
        if((ptr[iStart] == iValue)||(ptr[iEnd]== iValue))
        {
            bFlag=true;
            break;
        }
        iStart++;
        iEnd--;
    }

    return bFlag;
}

int main()
{
    int iValue=0;
    bool bRet=false;
    int iNo=0;
    char ch='\0';

    cout<<"Enter number of elements: ";
    cin>>iValue;

    ArrayX<int> *lobj=new ArrayX<int>(iValue); // object crated dynamically
    lobj->Accept();
    lobj->Display();

    cout<<"Enter the element that you want to search: ";
    cin>>iNo;
    bRet=lobj->BiDirectionalSearch(iNo);
    if(bRet == true)
    {
        cout<<"Element is present"<<endl;
    }
    else
    {
        cout<<"Element does not present"<<endl;
    }

    
    ArrayX<char> sobj(iValue); // object created statically
    sobj.Accept();
    sobj.Display();
    cout<<"Enter the character that you want to search: ";
    cin>>ch;
    bRet=sobj.BiDirectionalSearch(ch);
    if(bRet == true)
    {
        cout<<"Element is present"<<endl;
    }
    else
    {
        cout<<"Element does not present"<<endl;
    }

    delete lobj;

    return 0;
}