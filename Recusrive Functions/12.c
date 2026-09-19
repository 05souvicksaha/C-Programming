#include <stdio.h>

int binarySearch(int a[], int low, int high, int key) {
    if (low > high)
        return -1;

    int mid = (low + high) / 2;

    if (a[mid] == key)
        return mid;
    if (key < a[mid])
        return binarySearch(a, low, mid - 1, key);
    return binarySearch(a, mid + 1, high, key);
}

int main() {
    int n, key;
    printf("Enter the number if elements: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter the element to search: ");
    scanf("%d", &key);

    int pos = binarySearch(a, 0, n - 1, key);

    if (pos == -1)
        printf("Not Found");
    else
        printf("Element found at position: %d", pos + 1);

    return 0;
}
