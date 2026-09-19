#include <stdio.h>

int mystrLen(char str[]) {
    int i;
    for (i = 0; str[i] != '\0'; i++);
    return i;
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    printf("Length: %d\n", mystrLen(str));
    return 0;
}
