#include <stdio.h>

int main() {
    int N, i,max,min;
    int a[50];
    printf("ENTER THE NUMBER OF ELEMENTS OF THE ARRAY: ");
    scanf("%d", &N);

    printf("ENTER %d ELEMENTS:\n", N);
    for(i = 0; i < N; i++) {
        scanf("%d", &a[i]);
    }
    max = min = a[0];
     for (i=0;i<N;i++)
    {
        if (max < a[i])
        max = a[i];
        if(min > a[i])
        min = a[i];
    }
    printf("MAXIMUM ELEMENT:%d",max);
    printf("\nMINIMUM ELEMENT:%d",min);
   
    return 0;
}