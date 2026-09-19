#include <stdio.h>

int main() 
{
    int N, i, f=0,j;
    int a[50];

    printf("ENTER THE NUMBER OF ELEMENTS OF THE ARRAY: ");
    scanf("%d", &N);

    printf("ENTER %d ELEMENTS:\n", N);
    for(i = 0; i < N; i++) 
    {
        scanf("%d", &a[i]);
    }

    printf("THE SUM OF THE ELEMENTS OF THE ARRAY IS:\n");
    for(i = 0; i < N; i++) 
    {
        f= f + a[i];
    }
    printf("%d",f);
    return 0;
}

