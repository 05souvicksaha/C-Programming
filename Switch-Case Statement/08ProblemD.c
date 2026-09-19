#include <stdio.h>
int main()
{
    int choice;
    float balance = 2000.00, amount;

    printf("--------Banking System Menu--------");
    printf("1. Deposit Money\n");
    printf("2. Withdraw Money\n");
    printf("Check Balannce\n");
    printf("4. Exit\n");
    printf("Chose between the above options (1 to 4): ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1: // Deposit
        printf("Enter amount to deposit: ");
        scanf("%f", &amount);
        if (amount > 0)
        {
            balance += amount;
            printf("%f rupees deposited sucessfully", amount);
        }
        else 
        {
            printf("Invalid Amount");
        }
        break;

    case 2: // Withdraw
        printf("Enter amount to withdraw: ");
        scanf("%f", &amount);
        if (amount <= 0)
        {
            printf("Invalid Amount.");
        }
        else if (balance < amount)
        {
            printf("Insufficiant balance");
        }
        else 
        {
            balance -= amount;
            printf("%f rupees withdrawn sucesfully", amount);

        }
        break;
    case 3:
        printf("Current Balance is %f", balance);
        break;
    case 4:
        printf("Thank you for using our banking system! Have a nice day!");
        break;
    default:
        printf("Invalid Option! Please try again");
    }
    return 0;
}