#include <stdio.h>
int main()
{
    int num, i;
    int factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0)
        printf("Factorial is not defined for negative numbers.\n");
    else {
        for (i = 1; i <= num; i++)
            factorial *= i;
        printf("Factorial of %d is %d\n", num, factorial);
    }
    return 0;
}