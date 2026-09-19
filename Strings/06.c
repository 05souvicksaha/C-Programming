#include <stdio.h>
#include <string.h>

void concatenate(char str1[], char str2[], char result[]) {
    strcpy(result, str1);
    strcat(result, str2);
}

int main() {
    char str1[100], str2[100], result[200];

    printf("Enter first string: ");
    fgets(str1, 100, stdin);
    str1[strcspn(str1, "\n")] = '\0';

    printf("Enter second string: ");
    fgets(str2, 100, stdin);
    str2[strcspn(str2, "\n")] = '\0';

    concatenate(str1, str2, result);

    printf("Concatenated string: %s\n", result);
    return 0;
}
