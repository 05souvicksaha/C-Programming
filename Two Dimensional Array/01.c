#include <stdio.h>

int main() {
    int a[5];
    int i;

    printf("Enter elements of the 1D array:\n");

    for(i = 0; i < 5; i++) {
        
            scanf("%d", &a[i]);
        
    }
printf("The 1D array is:\n");
for(i = 0; i < 5; i++) {
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

    return 0;
}