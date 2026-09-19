#include <stdio.h>

int findLargest(int a, int b) 
{
    if (a > b) 
    return a;
    else 
    return b;
}

int main() 
{
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    printf("The largest number is: %d\n", findLargest(num1, num2));
    return 0;
}