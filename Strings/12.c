#include <stdio.h>
#include <string.h>

void swapStrings(char str1[], char str2[]) {
    char temp[100];

    strcpy(temp, str1);
    strcpy(str1, str2);
    strcpy(str2, temp);
}

int main() {
    char str1[100], str2[100];

    printf("Enter first string: ");
    fgets(str1, 100, stdin);

    printf("Enter second string: ");
    fgets(str2, 100, stdin);

    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    printf("\nBefore swapping:\n");
    printf("String 1: %s\n", str1);
    printf("String 2: %s\n", str2);

    swapStrings(str1, str2);

    printf("\nAfter swapping:\n");
    printf("String 1: %s\n", str1);
    printf("String 2: %s\n", str2);

    return 0;
}