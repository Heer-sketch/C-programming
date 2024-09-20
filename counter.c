#include<stdio.h>
int main(){
    int long long number;
    int  count=0;

    printf("enter a number");
    scanf("%lld",&number);

    if(number<=0){
        count =1;
    }else{
        while(number>0){
            number=number/10;
            count++;
        }
    } 
    printf("total number of digits:%d\n",count);

    return 0;
    } 
    
    

