#include <stdio.h>

int main() 
{
    int a[3][3];
    int i, j;
    printf("Enter elements of the 2D array:\n");
    for(i = 0; i < 3; i++) 
    {
        for(j = 0; j < 3; j++) 
        {
            scanf("%d", &a[i][j]);
        }
    }
printf("The 2D array is:\n");
for(i = 0; i < 3; i++) 
{
    for(j = 0; j < 3; j++) 
    {
        printf("%d ", a[i][j]);
    }
    printf("\n");
}

    return 0;
}
