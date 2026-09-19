#include <stdio.h>
#include <string.h>

void findSubstring(char mainStr[], char subStr[]) {
    if (strstr(mainStr, subStr))
        printf("Substring found!\n");
    else
        printf("Substring not found!\n");
}

int main() {
    char mainStr[100], subStr[100];

    printf("Enter main string: ");
    fgets(mainStr, 100, stdin);
    mainStr[strcspn(mainStr, "\n")] = '\0';

    printf("Enter substring: ");
    fgets(subStr, 100, stdin);
    subStr[strcspn(subStr, "\n")] = '\0';

    findSubstring(mainStr, subStr);
    return 0;
}
