#include<stdio.h>
int main()
{
    int a, b, c;
    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);
    
    if (a == b && b == c)
    { 
       printf("All three numbers are equal");
    }
    else if (a >= b)
    {
        if (a >= c)
        {
            printf ("%d is the largest number among the three", a);
        }
        else 
        {
            printf ("%d is the largest number among the three", c);
        } 
    
    }
    else (b >= a );
    {
        if (b >= c)
        {
            printf ("%d is the largest number among the three", b);
        }
        else 
        {
            printf ("%d is the largest number among the three", c);
        }
    }
        return 0;
}