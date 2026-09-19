#include <stdio.h>

void displayString(char str[]) {
    printf("You have entered: %s\n", str);
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, 100, stdin);

    displayString(str);
    return 0;
}
