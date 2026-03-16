#include <stdio.h>
int main()
{
    int n, num, a = 0, b = 0;

    printf("Enter the number of integers: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter integer %d: ", i + 1);
        scanf("%d", &num);

        if (num > 0)
        {
            a++;
        }
        else if (num < 0)
        {
            b++;
        }
    }

    printf("Positive numbers: %d\n", a);
    printf("Negative numbers: %d\n", b);
    return 0;
}