#include <stdio.h>
#include <string.h>

int main() {
    char str[10][50];
    int n, i, j;

    printf("Enter number of strings: ");
    scanf("%d", &n);
    getchar();

    printf("Enter the strings:\n");
    for(i = 0; i < n; i++)
        fgets(str[i], 50, stdin);

    for(i = 0; i < n; i++)
        str[i][strcspn(str[i], "\n")] = '\0';

    printf("Duplicate strings are:\n");
    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(strcmp(str[i], str[j]) == 0)
                printf("%s\n", str[i]);
        }
    }

    return 0;
}
