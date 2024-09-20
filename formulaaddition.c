#include <stdio.h>

int main() {
    float x, y, z;
    printf("Enter the value of x: ");
    scanf("%f", &x);
    printf("Enter the value of y: ");
    scanf("%f", &y);
    printf("Enter the value of z: ");
    scanf("%f", &z);
    float result = (x + y) * (x + y) * (x + y);
    
    // Print result
    printf("The result of (x+y)*(x+y)^2 is: %f\n", result);
    
    return 0;
}
