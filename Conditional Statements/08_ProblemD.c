#include<stdio.h>
int main()
{
    int a;
    printf("Enter the amount in Units: ");
    scanf("%d", &a);
    if (a <= 100)
    {
        printf("The final bill is: %d\n", a * 5);
    }
    else if (a > 100 && a <= 300)
    {
        printf("The final bill is: %d\n", a * 7);
    }
    else
    {
        printf("The final bill is: %d\n", a * 10);
    }
    return 0;
}