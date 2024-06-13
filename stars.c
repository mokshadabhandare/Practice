#include<stdio.h>

void Display(int ino)
{
    int i=1;
   while(ino<0)
   {
     printf("*");
     ino--;
   }
}
int main()
{
    int ivalue=0;

    printf("enter number");
    scanf("%d",&ivalue);

    Display(ivalue);
    return 0;
}