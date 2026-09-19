#include <stdio.h>

void swap_numbers(int x, int y) 
{
    int temp;
    temp = x;
    x = y;
    y = temp;

    printf("Inside function (after swap): num1 = %d, num2 = %d\n", x, y);
}

int main() 
{
    int num1 = 5;
    int num2 = 10;
    
    printf("Before function call: num1 = %d, num2 = %d\n", num1, num2);
    
    swap_numbers(num1, num2);
    
    printf("After function call : num1 = %d, num2 = %d\n", num1, num2);
    
    return 0;
}
