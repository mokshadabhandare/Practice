#include<stdio.h>

void Display (int iNo,int iFrequency)
{
   int i=0;
   for(i=0;i<iFrequency;i++)
   {
    printf("Output",i);
   }
}
int main()
{
    int ivalue=0;
    int ifre=0;

    printf("Enter number");
    scanf("%d",&ivalue);

    printf("Enter frequency");
    scanf("%d",&ifre);

    Display(ivalue,ifre);

    return 0;
}