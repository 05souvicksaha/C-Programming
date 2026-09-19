#include <stdio.h>

struct Student 
{
    int roll;
    char name[50];
    float marks;
};

int main() 
{
    struct Student s[10];
    int i, n;
    printf("Enter number of students (max 10): ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("\nStudent %d\n", i + 1);
        printf("Enter Roll: ");
        scanf("%d", &s[i].roll);
        printf("Enter Name: ");
        scanf("%s", s[i].name);
        printf("Enter Marks: ");
        scanf("%f", &s[i].marks);
    }
    printf("\n--- Class List ---\n");
    for (i = 0; i < n; i++) 
    {
        printf("%d\t%s\t%.2f\n", s[i].roll, s[i].name, s[i].marks);
    }
    return 0;
}