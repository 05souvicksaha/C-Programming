#include <Stdio.h>

void swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;

    printf("After swapping: a= %d and b = %d\n", a, b);
}

int main()
{

    int a, b;

    printf("Enter value of a: ");
    scanf("%d", &a);

    printf("Enter value of b: ");
    scanf("%d", &b);

    swap(a, b);
    printf("Before swapping: a= %d and b = %d\n", a, b);

    

    return 0;
}