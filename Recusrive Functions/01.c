
#include <stdio.h>

void print_numbers(int n) {
    if (n == 0) {
        return;
    }

    print_numbers(n - 1);
    printf("%d ", n);
}

int main() {
    int n;

    printf("Enter N: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("N must be a positive integer.\n");
    }

    print_numbers(n);

    return 0;
}
