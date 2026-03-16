#include <stdio.h>
int main()
{
    int i, n;
    printf("Enter your number: \n");
    scanf("%d", &n);
    for (i = n; i >= 1; i--)
    {
        printf("%d", i);
    }
    return 0;
}