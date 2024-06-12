//Write a program to print 5 to 1 on screen 
//5 4 3 2 1

#include<iostream>
using namespace std;

void Display()
{
   /* for(int i=5;i>=1;i--)
    {
        cout<<i<<" ";
    }
    */
   int i=5;

   while(i>=1)
   {
    cout<<i<<" ";
    i--;
   }
}
int main()
{
    Display();
    return 0;
}