#include <stdio.h>

int main() {
    int a, b, c, d;
    int max;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    printf("Enter c: ");
    scanf("%d", &c);
    printf("Enter d: ");
    scanf("%d", &d);
    if (a >= b) {
        if (a >= c) {
            if (a >= d) {
                max = a;
            } else {
                max = d;
            }
        } else {
            if (c >= d) {
                max = c;
            } else {
                max = d;
            }
        }
    } else {
        if (b >= c) {
            if (b >= d) {
                max = b;
            } else {
                max = d;
            }
        } else {
            if (c >= d) {
                max = c;
            } else {
                max = d;
            }
        }
    }
    printf("The maximum number is %d\n", max);

    return 0;
}
