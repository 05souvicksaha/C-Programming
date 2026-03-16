#include <stdio.h>
int main()
{
    int n, i;
    int a = 0, b = 1, c = 1, d;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("Tribonacci Series up to %d terms:\n", n);

    if (n >= 1) printf("%d ", a);
    if (n >= 2) printf("%d ", b);
    if (n >= 3) printf("%d ", c);

    for (i = 4; i <= n; i++) {
        d = a + b + c;
        printf("%d ", d);
        a = b;
        b = c;
        c = d;
    }

    if (n > 0) printf("\n");
    return 0;
}