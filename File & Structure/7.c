#include <stdio.h>

struct Student 
{
    int roll;
    char name[50];
    float marks;
};

int main() 
{
    struct Student s1;

    printf("Enter Roll Number: ");
    scanf("%d", &s1.roll);
    printf("Enter Name: ");
    scanf("%s", s1.name);
    printf("Enter Marks: ");
    scanf("%f", &s1.marks);
    printf("\n--- Details Entered ---\n");
    printf("Roll: %d\nName: %s\nMarks: %.2f\n", s1.roll, s1.name, s1.marks);
    return 0;
}