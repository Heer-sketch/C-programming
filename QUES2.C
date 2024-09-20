  #include <stdio.h>
void main(){
    int bs , hra,da,ta,gs;

    printf("enter your basic salary=");
    scanf("%d",&bs);

    hra = bs * 10/100;
    da = bs * 5/100;
    ta = bs * 8/100;

    gs = bs + hra + ta + da;
     printf("gross salary is = Rs %d",gs);
}