#include <stdio.h>

void removeSpaces(char str[]) {
    int i, j = 0;

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n') {
            str[j] = str[i];
            j++;
        }
    }
    str[j] = '\0';
}

int main() {
    char str[100];

    printf("Enter your string:\n");
    fgets(str, 100, stdin);

    removeSpaces(str);

    printf("After skipping the spaces is: %s", str);
    return 0;
}
