#include <stdio.h>

int linearSearch(int a[], int n, int key, int i) {
    if (i == n)
        return -1;
    if (a[i] == key)
        return i;
    return linearSearch(a, n, key, i + 1);
}

int main() {
    int n, key;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &key);

    int pos = linearSearch(a, n, key, 0);

    if (pos == -1)
        printf("Not Found");
    else
        printf("%d", pos + 1);

    return 0;
}
