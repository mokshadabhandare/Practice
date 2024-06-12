// problem statement : addition of two numbers

#include<iostream>
using namespace std;
 
 int Substraction(int iNo1, int iNo2)
 {
    int iResult=0;
    iResult=iNo1-iNo2;
    return iResult;
 }
 int Addition (int num1, int num2)
 {
    if(num1<0)
    {
        num1=-num1;
    }
    if(num2<0)
    {
        num2=-num2;
    }

    int iResult=0;

    iResult = num1+num2;

    return iResult;
 }
 int main()
 {
    int iNo1=0;
    int iNo2=0;
    
    cout<<"Enter the first number"<<endl;
    cin>>iNo1;

    cout<<"Enter the second number"<<endl;
    cin>>iNo2;

    int iAns1=0;
    int iAns2=0;
    iAns1=Addition(iNo1,iNo2);
    cout<<"Addition of two number is "<<iAns1<<endl;

    iAns2=Substraction(iNo1,iNo2); // call by value

    cout<<"Substraction of two number is "<<iAns2<<endl;
    
    //cout<<"Addition of two number is <<Addition(int num1, int num2)"<<endl;

    return 0;
 }