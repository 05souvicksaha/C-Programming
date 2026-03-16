#include <stdio.h>
int main()
{
    int n, choice;
    float marks[100], total = 0, average;
    int passed = 0;
    float highest, lowest;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter marks for student %d: ", i + 1);
        scanf("%f", &marks[i]);
    }

    highest = lowest = marks[0];

    while (1)
    {
        printf("\n--- Menu ---\n");
        printf("1. Display total and average marks\n");
        printf("2. Find highest and lowest marks\n");
        printf("3. Count students who passed (=>40)\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            total = 0;
            for (int i = 0; i < n; i++)
            {
                total += marks[i];
            }
            average = total / (float)n;
            printf("Total marks: %.2f\n", total);
            printf("Average marks: %.2f\n", average);
            break;

        case 2:
            for (int i = 0; i < n; i++)
            {
                if (marks[i] > highest)
                    highest = marks[i];
                if (marks[i] < lowest)
                    lowest = marks[i];
            }
            printf("Highest marks: %.0f\n", highest);
            printf("Lowest marks: %.0f\n", lowest);
            break;

        case 3:
            passed = 0;
            for (int i = 0; i < n; i++)
            {
                if (marks[i] >= 40)
                    passed++;
            }
            printf("Students passed: %d\n", passed);
            break;

        case 4:
            printf("Exiting program...\n");
            return 0;

        default:
            printf("Invalid choice!\n");
        }
    }
    return 0;
}