#include<stdio.h>
int main()
{
    int f=0;
    int c=0;
    printf("Enter farhenite:");
    scanf("%d",&f);

    c=(f-32)*5/9;

    printf("Farhenite to celusis is:%d\n",c);
    return 0;
}