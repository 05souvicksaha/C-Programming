#include <stdio.h>

int main() {
    int N, i;
    int a[50];
    int e = 0, o = 0;

    printf("Enter number of elements: ");
    scanf("%d", &N);

    printf("Enter %d elements:\n", N);
    for(i = 0; i < N; i++) {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < N; i++) {
        if(a[i] % 2 == 0)
            e++;
        else
            o++;
    }

    printf("Number of even elements = %d\n", e);
    printf("Number of odd elements  = %d\n", o);

    return 0;
}