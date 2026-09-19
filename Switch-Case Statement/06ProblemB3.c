#include <stdio.h>

int main() {
    int choice;
    float temp, converted;

    printf("Temperature Conversion Program\n");
    printf("1. Convert Celsius to Fahrenheit\n");
    printf("2. Convert Fahrenheit to Celsius\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Enter temperature in Celsius: ");
            scanf("%f", &temp);
            converted = (temp * 9 / 5) + 32;
            printf("Temperature in Fahrenheit: %.2f°F\n", converted);
            break;

        case 2:
            printf("Enter temperature in Fahrenheit: ");
            scanf("%f", &temp);
            converted = (temp - 32) * 5 / 9;
            printf("Temperature in Celsius: %.2f°C\n", converted);
            break;

        default:
            printf("Invalid choice! Please enter 1 or 2.\n");
    }

    return 0;
}
