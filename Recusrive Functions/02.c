#include <stdio.h>

void print_numbers(int n) {
    if (n == 0) {
        return;
    }

    printf("%d ", n);   
    print_numbers(n - 1);
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
