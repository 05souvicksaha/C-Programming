#include <stdio.h>
int main()
{
    int customer;
    float unit, bill;
    printf("Electricity Bill Calculator\n");
    printf("1. Domestic\n");
    printf("2. Commercial\n");
    printf("3. Industrial\n");
    printf("Enter customer type (1-3): \n");
    scanf("%d", &customer);
    printf("Enter units consumed: \n");
    scanf("%f", &unit);
    switch (customer)
    {
    case 1: // Domestic
        if (unit <= 100)
            bill = unit * 1.5;
        else if (unit <= 300)
            bill = 100 * 1.5 + (unit - 100) * 2.5;
        else
            bill = 100 * 1.5 + 200 * 2.5 + (unit - 300) * 4.0;
        break;
    case 2: // Commercial
        if (unit <= 200)
            bill = unit * 2.0;
        else if (unit <= 500)
            bill = 200 * 2.0 + (unit - 200) * 3.0;
        else
            bill = 200 * 2.0 + 300 * 3.0 + (unit - 500) * 5.0;
        break;
    case 3: // Industrial
        if (unit <= 500)
            bill = unit * 3.0;
        else if (unit <= 1000)
            bill = 500 * 3.0 + (unit - 500) * 4.0;
        else
            bill = 500 * 3.0 + 500 * 4.0 + (unit - 1000) * 6.0;
        break;
    default:
        printf("Invalid customer type.\n");
    }
    if (customer >= 1 && customer <= 3)
    {
        printf("Total bill amount: %f\n", bill);
    }
    return 0;
}