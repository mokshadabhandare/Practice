#include<stdio.h>
int main()
{
   char ch='A';
   int i =11;
   float f= 90.80;
   double d=90.8766;

   printf("Char :%u\n",sizeof(ch));
   printf("Int:%d\n",sizeof(i));
   printf("Float:%u\n",sizeof(f));
   printf("Double:%d\n",sizeof(d));
    return 0;

}