//write a program to find factorial 

#include<iostream>
using namespace std;

int findFactorial(int iNo)
{
   int iFact=1;
   for(int i=1;i<=iNo;i++)
   {
    iFact=iFact*i;
   }
   return iFact;
}
int main()
{
    int iNo=0;

    cout<<"Enter the number"<<endl;
    cin>>iNo;

   int iRet=0;

    iRet=findFactorial(iNo);

    cout<<"Factorial of"<<iNo << "is" << iRet <<endl;

    return 0;
}