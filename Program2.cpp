// problem statement : addition of two numbers

#include<iostream>
using namespace std;
 
 int Addition (int num1, int num2)
 {
    int iResult=0;

    iResult=num1+num2;

    return iResult;
 }
 int main()
 {
    int iNo1=10;
    int iNo2=20;
    
    int iAns=0;

    iAns=Addition(iNo1,iNo2);

    cout<<"Addition of two number is "<<iAns<<endl;
    return 0;
 }