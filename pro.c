#include <stdio.h>

int main() {
    int choice;
    float temperature;

    printf("Temperature Converter\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("3. Celsius to Kelvin\n");
    printf("4. Kelvin to Celsius\n");
    printf("5. Fahrenheit to Kelvin\n");
    printf("6. Kelvin to Fahrenheit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter temperature: ");
    scanf("%f", &temperature);

    switch (choice) {
        case 1:
            printf("%.2f Celsius is equal to %.2f Fahrenheit\n", temperature, (temperature * 9 / 5) + 32);
            break;
        case 2:
            printf("%.2f Fahrenheit is equal to %.2f Celsius\n", temperature, (temperature - 32) * 5 / 9);
            break;
        case 3:
            printf("%.2f Celsius is equal to %.2f Kelvin\n", temperature, temperature + 273.15);
            break;
        case 4:
            printf("%.2f Kelvin is equal to %.2f Celsius\n", temperature, temperature - 273.15);
            break;
        case 5:
            printf("%.2f Fahrenheit is equal to %.2f Kelvin\n", temperature, (temperature - 32) * 5 / 9 + 273.15);
            break;
        case 6:
            printf("%.2f Kelvin is equal to %.2f Fahrenheit\n", temperature, (temperature - 273.15) * 9 / 5 + 32);
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}
