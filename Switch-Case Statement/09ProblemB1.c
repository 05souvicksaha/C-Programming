#include <stdio.h>

int main() {
    int choice;
    float num1, num2, result;

    // Display menu
    printf("=== Simple Calculator ===\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    // Input numbers
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    // Perform operation
    switch (choice) {
        case 1:
            result = num1 + num2;
            printf("Result: %f + %f = %f\n", num1, num2, result);
            break;
        case 2:
            result = num1 - num2;
            printf("Result: %f - %f = %f\n", num1, num2, result);
            break;
        case 3:
            result = num1 * num2;
            printf("Result: %f * %f = %f\n", num1, num2, result);
            break;
        case 4:
            if (num2 != 0)
                printf("Result: %f / %f = %f\n", num1, num2, num1 / num2);
            else
                printf("Error: Division by zero is not allowed.\n");
            break;
        default:
            printf("Invalid choice! Please select between 1 and 4.\n");
    }

    return 0;
}