#include <stdio.h>

void reverseString(char str[]) {
    int i, len;

    for (len = 0; str[len] != '\0' && str[len] != '\n'; len++);


    for (i = len - 1; i >= 0; i--)
        printf("%c", str[i]);
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, 100, stdin);

    printf("Reversed string: ");
    reverseString(str);
    printf("\n");

    return 0;
}
