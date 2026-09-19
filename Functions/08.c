#include <stdio.h>
float add(float a, float b) 
{ 
    return a + b; 
}
float sub(float a, float b) 
{ 
    return a - b; 
}
float mul(float a, float b) 
{ 
    return a * b; 
}
float div(float a, float b) 
{
    if(b!= 0) 
    return a / b;
    else 
    return 0;
}
int main() 
{
    int choice;
    float num1, num2, result;
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);
    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch(choice) 
    {
        case 1:
            result = add(num1, num2);
            printf("Result: %.2f\n", result);
            break;
        case 2:
            result = sub(num1, num2);
            printf("Result: %.2f\n", result);
            break;
        case 3:
            result = mul(num1, num2);
            printf("Result: %.2f\n", result);
            break;
        case 4:
            if(num2 == 0) 
            {
                printf("Error: Division by zero is not allowed.\n");
            } 
            else 
            {
                result = div(num1, num2);
                printf("Result: %.2f\n", result);
            }
            break;
        default: printf("Invalid choice!\n");
    }
    return 0;
}