#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter the first integer: ");
    scanf("%d", &a);
    printf("Enter the second integer: ");
    scanf("%d", &b);
    if (a > b)
    {
        printf("The largest number is %d\n", a);
    }
    if (b > a)
    {
        printf("The largest number is %d\n", b);
    }
    if (a == b)
    {
        printf("Both numbers are equal\n");
    }
    return 0;
}
