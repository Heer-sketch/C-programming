#include <stdio.h>

void performOperation(int choice);

int main() {
    int choice;

    do {
        printf("\nMenu:\n");
        printf("Press 1 for +\n");
        printf("Press 2 for -\n");
        printf("Press 3 for *\n");
        printf("Press 4 for /\n");
        printf("Press 5 for %%\n"); 
        printf("Press 0 for exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 5) {
            performOperation(choice);
        } else if (choice != 0) {
            printf("Invalid choice! Please try again.\n");
        }

    } while (choice != 0);

    printf("Exiting the program. Goodbye!\n");
    return 0;
}

void performOperation(int choice) {
    float num1, num2, result;

    printf("Enter the first number: ");
    scanf("%f", &num1);
    printf("Enter the second number: ");
    scanf("%f", &num2);

    switch (choice) {
        case 1:
            result = num1 + num2;
            printf("Addition of %.2f and %.2f is %.2f\n", num1, num2, result);
            break;
        case 2:
            result = num1 - num2;
            printf("Subtraction of %.2f and %.2f is %.2f\n", num1, num2, result);
            break;
        case 3:
            result = num1 * num2;
            printf("Multiplication of %.2f and %.2f is %.2f\n", num1, num2, result);
            break;
        case 4:
            if (num2 != 0) {
                result = num1 / num2;
                printf("Division of %.2f and %.2f is %.2f\n", num1, num2, result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        case 5:
            if ((int)num2 != 0) {
                printf("Modulo of %.0f and %.0f is %d\n", num1, num2, (int)num1 % (int)num2);
            } else {
                printf("Error: Modulo by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid choice.\n");
            break;
    }
}
