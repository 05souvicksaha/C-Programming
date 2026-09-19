#include <stdio.h>
#include <string.h>

int main() {
    char name[20][50], temp[50];
    int i, j, n;

    printf("Enter number of names: ");
    scanf("%d", &n);

    printf("Enter the names:\n");
    for(i = 0; i <= n; i++) {
        fgets(name[i], 100, stdin);
    }

    for(i = 0; i <= n - 1; i++) {
        for(j = i + 1; j <= n; j++) {
            if(strcmp(name[i], name[j]) > 0) {
                strcpy(temp, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], temp);
            }
        }
    }

    printf("Names in alphabetical order:\n");
    for(i = 0; i <= n; i++) {
        printf("%s\n", name[i]);
    }

    return 0;
}
