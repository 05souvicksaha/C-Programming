#include <stdio.h>

int main() 
{
    int n, i, sum = 0;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    int *ptr = arr;

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < n; i++) 
    {
        sum += *ptr;
        ptr++;
    }
    printf("Sum of elements: %d\n", sum);
    return 0;
}