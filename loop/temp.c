#include <stdio.h>


void celsiusToFahrenheit();
void fahrenheitToCelsius();

int main() {
    int choice;

    printf("Temperature Converter\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            celsiusToFahrenheit();
            break;
        case 2:
            fahrenheitToCelsius();
            break;
        default:
            printf("Invalid choice! Please enter 1 or 2.\n");
            break;
    }

    return 0;
}

void celsiusToFahrenheit() {
    float celsius, fahrenheit;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9/5) + 32;
    printf("%.2f Celsius is equal to %.2f Fahrenheit\n", celsius, fahrenheit);
}

void fahrenheitToCelsius() {
    float fahrenheit, celsius;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - 32) * 5/9;
    printf("%.2f Fahrenheit is equal to %.2f Celsius\n", fahrenheit, celsius);
}
