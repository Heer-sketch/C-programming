#include<stdio.h>

void main()
{
    int a,b;
    a=10;
    b=5;
    printf("(%d+%d)*(%d+%d)(%d+%d)=%d",a,b,a,b,a,b,(a+b)*(a+b)*(a+b));
}