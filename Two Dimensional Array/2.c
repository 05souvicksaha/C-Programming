#include <stdio.h>
int main() 
{
    int n, i, sum = 0;
    printf("Enter size: ");
    scanf("%d", &n);
    int arr[n];
    for(i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("Sum = %d", sum);
    return 0;
}