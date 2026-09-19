#include <stdio.h>

void EvenOdd(int n) {
    if (n % 2 == 0)
        printf("The given integer is even\n");
    else
        printf("The given integer is odd\n");
}

int main() {
    int num;
    printf("Enter your integer: \n");
    scanf("%d", &num);

    EvenOdd(num);

    return 0;
}
