#include<stdio.h>
int main()
{
    int a=0;
    int b=0;

    printf("Enter first number");
    scanf("%d",&a);
    printf("Enter second number");
    scanf("%d",&b);

    int temp=a;

    a=b;

    b=temp;

    printf("After swapping a=%d,b=%d",a,b);

    return 0;
}