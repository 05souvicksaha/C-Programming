#include <stdio.h>

int main() 
{
    int n, i, j, sum = 0;
    printf("Enter the size of the square matrix (n x n): ");
    scanf("%d", &n);
    int matrix[n][n];
    printf("Enter elements of the matrix:\n");
    for (i = 0; i < n; i++) 
    {
        for (j = 0; j < n; j++) 
        {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nPrincipal Diagonal Elements: ");
    for (i = 0; i < n; i++) 
    {
        printf("%d ", matrix[i][i]);
        sum += matrix[i][i];
    }
    printf("\nSum of Principal Diagonal Elements: %d\n", sum);
    return 0;
}