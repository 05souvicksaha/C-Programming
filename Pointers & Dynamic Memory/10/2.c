#include <stdio.h>

int main() 
{
    int num;
    int *ptr = &num;
    printf("Enter an initial integer value: ");
    scanf("%d", &num);
    printf("Original value: %d\n", *ptr);
    printf("Enter a new value to modify via pointer: ");
    scanf("%d", ptr); 
    printf("Modified value (checked via variable): %d\n", num);
    return 0;
}