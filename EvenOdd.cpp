//even or odd

#include<iostream>

using namespace std;

bool checkEvenorOdd(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }
     if(iNo%2==0)
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

    cout<<"Enter number"<<endl;
    cin>>iNo;

    bool bRet=false;

    
    bRet=checkEvenorOdd(iNo);   //call by value

    if(bRet==true)
    {
        cout<<"Number is Even";
    }
    else{
        cout<<"Number is odd";
    }

    return 0;

}

