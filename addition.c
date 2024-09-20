#include<stdio.h>
int main()
{
    int number,lastDigit,firstDigit,sum;
    printf("Enter a number: ");
    scanf("%d",&number);

    if(number < 0 ){
        number = -number;
    }
    lastDigit = number % 10;
    int temp = number;
    while(temp>=10){
        temp /=10;
    }
    firstDigit = temp;
    sum = firstDigit +lastDigit;
    printf("the sum of the first and lastdigit is:\n",sum);
    }
