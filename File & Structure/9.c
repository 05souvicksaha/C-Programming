#include <stdio.h>

struct Student 
{
    int roll;
    char name[50];
    float marks;
};
void display(struct Student s) 
{
    printf("\n[Inside Function] Student Details:\n");
    printf("Roll: %d, Name: %s, Marks: %.2f\n", s.roll, s.name, s.marks);
}
int main() 
{
    struct Student s1;
    printf("Enter Roll: ");
    scanf("%d", &s1.roll);
    printf("Enter Name: ");
    scanf("%s", s1.name);
    printf("Enter Marks: ");
    scanf("%f", &s1.marks);
    display(s1);
    return 0;
}