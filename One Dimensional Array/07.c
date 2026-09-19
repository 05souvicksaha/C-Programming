
#include <stdio.h>
int main()
{
    int n, i, a[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Invalid array size.\n");
    }
    printf("Enter %d elements:\n", n);
    for ( i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for ( i = 0; i < n / 2; i++)
    {
        a[i] = a[i] ^ a[n - 1 - i];
        a[n - 1 - i] = a[i] ^ a[n - 1 - i];
        a[i] = a[i] ^ a[n - 1 - i];
    }

    printf("Reversed array:\n");
    for ( i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
