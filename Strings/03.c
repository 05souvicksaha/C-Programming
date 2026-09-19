#include <stdio.h>

void myStrCopy(char src[], char dest[]) {
    int i;
    for (i = 0; src[i] != '\0'; i++) {
        dest[i] = src[i];
    }
    dest[i] = '\0';
}

int main() {
    char src[100], dest[100];

    printf("Enter source string: ");
    fgets(src, 100, stdin);

    myStrCopy(src, dest);

    printf("Copied string: %s\n", dest);
    return 0;
}
