#include<stdio.h>

float multiply(float a,float b)
{
    return a*b;
}
int main()
{
    float a=20.00, b=40.00;

    float product=0;

    product=multiply(a,b);

    printf("Float multiplication of two numbers:%f\n",product);
    return 0;

}