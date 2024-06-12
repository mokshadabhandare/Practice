//check number is positive or negative 
// input 10- positive 
//       -4 negative 
 //      0 neither negative or nor positive


 #include<iostream>
 using namespace std;

void CheckNumber(int iNo)
{
    if(iNo<0)
    {
       cout<<"Number is Negative";
    }
    else if(iNo>0)
    {
        cout<<"Number is positive";
    }
    else
    {
        cout<<"Number is neither negative or positive";
    }
}
 int main()
 {
    int iNo=0;
    cout<<"Enter number"<<endl;
    cin>>iNo;
    
    CheckNumber(iNo);

    return 0;
 }