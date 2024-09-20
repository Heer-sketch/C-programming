#include <stdio.h>

int main() {
    int num;
    printf("Enter number: ");
    scanf("%d", &num);

    if (num > 0) {
        printf("+ve\n");
    } else if (num < 0) {
        printf("-ve\n");
    } else {
        printf("zero\n");
    }

    return 0;
}
