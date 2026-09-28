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
    bool BinarySearch(T iNo);
    void BubbleSort();
   
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

template <class T>
bool ArrayX<T>::BinarySearch(T iValue) // Decreasing order
{
    int iStart=0;
    int iEnd=iSize-1;
    int iMid=0;
    bool bFlag=false;

    while(iStart <= iEnd)
    {
        iMid=iStart+((iEnd-iStart)/2);
        
        if((ptr[iMid] == iValue)||(ptr[iStart]==iValue)||(ptr[iEnd]== iValue))
        {
            bFlag=true;
            break;
        }
        else if(iValue > ptr[iMid])
        {
            iEnd=iMid-1;
        }
        else if(iValue < ptr[iMid])
        {           
            iStart=iMid+1;
        }
    }

    return bFlag;
}

template <class T>
void ArrayX<T>::BubbleSort()
{
    T temp;
    int i=0;
    int j=0;

    for(i=0;i<iSize;i++)
    {
        for(j=0;j<iSize-1;j++)
        {
            if(ptr[j] > ptr[j+1])
            {
                temp=ptr[j];
                ptr[j]=ptr[j+1];
                ptr[j+1]=temp;
            }
        }
    }

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
    cout<<"Data before sort"<<endl;
    lobj->Display();

    cout<<"Data after sort: ";
    lobj->BubbleSort();
    lobj->Display();

    /*
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
*/
    delete lobj;

    return 0;
}