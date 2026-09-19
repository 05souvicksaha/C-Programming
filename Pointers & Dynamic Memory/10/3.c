#include <stdio.h>

int main() 
{
    int arr[5];
    int *ptr = arr;
    int i;
    printf("Enter 5 integers:\n");
    for(i = 0; i < 5; i++) 
    {
        scanf("%d", &arr[i]);
    }
    printf("\nPointer start address: %p\n", ptr);
    printf("Value at current pointer: %d\n",*ptr);  
    ptr++; 
    printf("After ptr++ (points to next int): %p, Value: %d\n", ptr, *ptr);
    ptr = ptr + 2; 
    printf("After ptr = ptr + 2: %p, Value: %d\n", ptr, *ptr);
    ptr--; 
    printf("After ptr--: %p, Value: %d\n", ptr, *ptr);
    return 0;
}