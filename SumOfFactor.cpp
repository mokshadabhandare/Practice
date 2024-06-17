//write program to find factor of number and sum of factor

#include<iostream>
using namespace std;

int SumOfFactors(int iNo)
{
    int iSum=0;
     for(int i=1;i<iNo;i++)
     {
        if(iNo%i==0) 
        {
            iSum=iSum+i;
        }
     }
     return iSum;
}
int main()
{
    int iNo=0;

    cout<<"Enter the number"<<endl;
    cin>>iNo;
    
    int iRet=0;
    iRet=SumOfFactors(iNo);
    
    cout<<"Sum of factors is"<<iRet <<endl;
    
    return 0;
}