
#include <stdio.h>

int main() {
    int a, b, c, d;
    int min;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    printf("Enter c: ");
    scanf("%d", &c);
    printf("Enter d: ");
    scanf("%d", &d);
    if (a <= b) {
        if (a <= c) {
            if (a <= d) {
                min = a;
            } else {
                min = d;
            }
        } else {
            if (c <= d) {
                min = c;
            } else {
                min = d;
            }
        }
    } else {
        if (b <= c) {
            if (b <= d) {
                min = b;
            } else {
                min = d;
            }
        } else {
            if (c <= d) {
                min = c;
            } else {
                min = d;
            }
        }
    }
    printf("The mnimum number is %d\n", min);

    return 0;
}
