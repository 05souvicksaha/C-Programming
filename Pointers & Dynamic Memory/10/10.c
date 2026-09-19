#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int n, i;
    float sum = 0, average;
    int *arr;
    printf("Enter total number of elements for dynamic array: ");
    scanf("%d", &n);
    arr = (int*)malloc(n * sizeof(int));
    if (arr == NULL) 
    {
        printf("Memory Error\n");
        return 1;
    }
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
        sum += arr[i]; 
    }
    printf("Array elements: ");
    for(i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }
    average = sum / n;
    printf("\nAverage of elements: %.2f\n", average);
    free(arr);
    return 0;
}