#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int main() {
    int x, y, sum;
    printf("Enter your 1st number: \n");
    scanf("%d", &x);
    printf("Enter your 2nd number: \n");
    scanf("%d", &y);

    sum = add(x, y);

    printf("Sum of the two given numbers: %d\n", sum);

    return 0;
}