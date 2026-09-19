#include <stdio.h>

int main() {
    int n, i, ARQ;
    int a[100];
    int found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &ARQ);

    for(i = 0; i < n; i++) {
        if(a[i] == ARQ) {
            found = 1;
            printf("Element %d found at position %d\n", ARQ, i + 1);
            break;
        }
    }

    if(found == 0) {
        printf("Element %d not found in the array\n", ARQ);
    }

    return 0;
}
