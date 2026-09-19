
#include <stdio.h>

int main() {
    int n, k;
    int found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid array size.\n");
    }

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &k);

    for (int i = 0; i < n; i++) {
        if (arr[i] == k) {
            printf("Element found at position %d\n", i + 1); 
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Element not found\n");
    }

    return 0;
}
