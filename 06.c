#include <stdio.h>
int main()
{
    int a, b, x, y, l, g;
    
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    
    x = a;
    y = b;
    
    // Find GCD using Euclidean algorithm with for loop
    for (; y != 0; ) {
        int t = y;
        y = x % y;
        x = t;
    }
    g = x;
    
    // Calculate LCM using formula: LCM(a,b) = (a*b)/GCD(a,b)
    l = (a * b) / g;
    
    printf("GCD of %d and %d is: %d\n", a, b, g);
    printf("LCM of %d and %d is: %d\n", a, b, l);
    return 0;
}