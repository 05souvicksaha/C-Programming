#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int n, i, sum = 0;
    int *arr;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    arr = (int*)malloc(n * sizeof(int));
    if (arr == NULL) 
    {
        printf("Memory allocation failed! Exiting...\n");
        return 1;
    }
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]); 
        sum += arr[i];        
    }

    printf("The sum of the elements is: %d\n", sum);
    free(arr);
    printf("Memory successfully deallocated using free().\n");
    return 0;
}