#include <stdio.h>
#include <math.h>


#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

void findAngles(float a, float b, float c);

int main() {
    float a, b, c;

    printf("Enter the length of side a: ");
    scanf("%f", &a);
    
    printf("Enter the length of side b: ");
    scanf("%f", &b);
    
    printf("Enter the length of side c: ");
    scanf("%f", &c);

    
    if (a <= 0 || b <= 0 || c <= 0 || a + b <= c || a + c <= b || b + c <= a) {
        printf("Invalid triangle sides.\n");
        return 1;
    }

    findAngles(a, b, c);

    return 0;
}

void findAngles(float a, float b, float c) {
    float angleA, angleB, angleC;

    
    angleA = acos((b*b + c*c - a*a) / (2 * b * c));
    angleB = acos((a*a + c*c - b*b) / (2 * a * c));
    angleC = acos((a*a + b*b - c*c) / (2 * a * b));

   
    if (angleA < 0 || angleA > M_PI ||
        angleB < 0 || angleB > M_PI ||
        angleC < 0 || angleC > M_PI) {
        printf("Error: Invalid angles computed.\n");
        return;
    }

    
    angleA = angleA * (180.0 / M_PI);
    angleB = angleB * (180.0 / M_PI);
    angleC = angleC * (180.0 / M_PI);

   
    printf("Angle A: %.2f degrees\n", angleA);
    printf("Angle B: %.2f degrees\n", angleB);
    printf("Angle C: %.2f degrees\n", angleC);
}
