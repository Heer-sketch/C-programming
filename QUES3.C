     #include <stdio.h>
int main(){
float f =1;
    float c;

    printf("enter celcius");
    scanf("%f",&c);

    f = 32 + (c * 9/5);
    printf("%.1f" , f);
}