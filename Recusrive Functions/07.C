#include <stdio.h>

int reverse(int n, int rev) {
    if (n == 0)
        return rev;
    return reverse(n / 10, rev * 10 + n % 10);
}

int main() {
    int n;
    printf("Enter the number of elements:\n");
    scanf("%d", &n);

    if (n == reverse(n, 0))
        printf("Palindrome");
    else
        printf("Not Palindrome");
return 0;
}
