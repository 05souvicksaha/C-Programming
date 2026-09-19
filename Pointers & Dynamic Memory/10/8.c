#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int n, i;
    int *arr;
    printf("Enter number of elements to allocate with calloc: ");
    scanf("%d", &n);
    arr = (int*)calloc(n, sizeof(int));
    if (arr == NULL) 
    {
        printf("Memory allocation failed!\n");
        return 1;
    }
    printf("Displaying values after calloc (should be 0):\n");
    for (i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    free(arr);
    return 0;
}