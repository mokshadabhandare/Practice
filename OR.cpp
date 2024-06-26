//write a program which is divisible by 5 or 10.
#include<iostream>
using namespace std;

bool checkDivisibleBy5And10(int iNo) //50 --->50%5==0 true 50%10==0 true
{                                    //15---->15%5==0 true 15%10!=0 false
   if((iNo%5==0) || (iNo%10==0))     //9---->9%5!=0 false
   {
    return true;
   }
   else
   {
    return false;
   }
}
int main()
{
    int iNo=0;

    cout<<"Enter the number"<<endl;
    cin>>iNo;

    bool bRet=false;

    bRet=checkDivisibleBy5And10(iNo);
 
    if(bRet==true)
    {
        cout<<"Number is divisible"<<endl;
    }
    else
    {
        cout<<"Number is not divisible"<<endl;
    }
    return 0;
}