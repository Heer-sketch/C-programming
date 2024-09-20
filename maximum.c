#include <stdio.h>

int main() {
    int a,b,c;


    printf("Enter a: ");
    scanf("%d", &a);

    printf("Enter b: ");
    scanf("%d", &b);

    printf("Enter c: ");
    scanf("%d", &c);

    int max;
    if (a >= b) {
        if (a >= c) {
            max =a;
        } else {
            max = c;
        }
    } else {
        if (b >= c) {
            max = b;
        } else {
            max = c;
        }
    }

    printf("The maximum value is: %d\n", max);

    return 0;
}
