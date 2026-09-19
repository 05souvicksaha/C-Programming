#include <stdio.h>

void myStrCompare(char str1[], char str2[]) {
    int i;

    for (i = 0; str1[i] != '\0' && str2[i] != '\0'; i++) {
        if (str1[i] != str2[i]) {
            printf("Strings are not equal\n");
            return;
        }
    }

    if (str1[i] == str2[i])
        printf("Strings are equal\n");
    else
        printf("Strings are not equal\n");
}

int main() {
    char str1[100], str2[100];

    printf("Enter first string: ");
    fgets(str1, 100, stdin);

    printf("Enter second string: ");
    fgets(str2, 100, stdin);

    myStrCompare(str1, str2);
    return 0;
}