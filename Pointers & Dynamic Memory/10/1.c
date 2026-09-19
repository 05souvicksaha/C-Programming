#include <stdio.h>

int main() 
{
    int num;
    int *ptr;
    printf("Enter an integer: ");
    scanf("%d", &num);
    ptr = &num;
    printf("Value of variable (using variable): %d\n", num);
    printf("Value of variable (using pointer): %d\n", *ptr);
    printf("Address of variable: %p\n", ptr);
    return 0;
}