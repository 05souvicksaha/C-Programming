#include <stdio.h>
int main()
{
    int n, even = 0, odd = 0, i;
        
        printf("Enter a number: ");
        scanf("%d", &n);
        
        for(i = 1; i <= n; i++) {
            if(i % 2 == 0) {
                even += i;
            } else {
                odd += i;
            }
        }
        
        printf("Sum of even numbers: %d\n", even);
        printf("Sum of odd numbers: %d\n", odd);
    return 0;
}