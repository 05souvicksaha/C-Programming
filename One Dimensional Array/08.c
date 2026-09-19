
#include <stdio.h>

int main() {
    int n, i, j, a[100], count, visited[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid array size.\n");
    }

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        visited[i] = 0;
    }

    printf("Element | Frequency\n");
    for (i = 0; i < n; i++) {
        if (visited[i]) continue;

        count = 1;
        for (j = i + 1; j < n; j++) {
            if (a[i] == a[j]) {
                count++;
                visited[j] = 1;
            }
        }

        printf("%d\t  %d\n", a[i], count);
    }

    return 0;
}
