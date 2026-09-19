#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int n, m, i;
    int *arr;
    printf("Enter initial size of array: ");
    scanf("%d", &n);
    arr = (int*)malloc(n * sizeof(int));   
    printf("Enter %d integers:\n", n);
    for(i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter new size to resize array to: ");
    scanf("%d", &m);
    arr = (int*)realloc(arr, m * sizeof(int));
    if (m > n) 
    {
        printf("Enter %d more integers:\n", m - n);
        for(i = n; i < m; i++) 
        {
            scanf("%d", &arr[i]);
        }
    }
    printf("Updated array elements:\n");
    for(i = 0; i < m; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    free(arr);
    return 0;
}