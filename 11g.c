#include <stdio.h>

int main()
{
    int n, i, j;
    printf("Enter n: ");
    scanf("%d", &n);

    int num = 1;

    for (i = 1; i <= n; i++)
    {

        printf("%d ", i);

        for (j = 1; j < i; j++)
        {
            printf("%d ", num + n);
            num++;
        }
        printf("\n");
    }

    return 0;
}
