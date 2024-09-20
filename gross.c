#include <stdio.h>

float calculateGrossSalary(float basicSalary, float allowances, float deductions);

int main() {
    float basicSalary, allowances, deductions, grossSalary;

    printf("Enter basic salary: ");
    scanf("%f", &basicSalary);
    
    printf("Enter allowances: ");
    scanf("%f", &allowances);
    
    printf("Enter deductions: ");
    scanf("%f", &deductions);

    grossSalary = calculateGrossSalary(basicSalary, allowances, deductions);

    printf("The gross salary is: %.2f\n", grossSalary);

    return 0;
}


float calculateGrossSalary(float basicSalary, float allowances, float deductions) {
    return basicSalary + allowances - deductions;
}
