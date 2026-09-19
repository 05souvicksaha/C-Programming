#include <stdio.h>
#include <stdlib.h>

struct Student 
{
    int roll;
    char name[50];
    float marks;
};

int main() 
{
    FILE *fptr;
    struct Student s;
    char filename[50];
    int n, i;
    printf("Enter filename to store records: ");
    scanf("%s", filename);
    fptr = fopen(filename, "w");
    if (fptr == NULL) 
    exit(1);
    printf("How many students? ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) 
    {
        printf("Enter Roll, Name, Marks for student %d: ", i + 1);
        scanf("%d %s %f", &s.roll, s.name, &s.marks);
        fprintf(fptr, "%d %s %.2f\n", s.roll, s.name, s.marks);
    }
    fclose(fptr);
    printf("Records saved to %s.\n", filename);
    fptr = fopen(filename, "r");
    if (fptr == NULL) 
    exit(1);
    printf("\n--- Reading Records from %s ---\n", filename);
    for (; fscanf(fptr, "%d %s %f", &s.roll, s.name, &s.marks) == 3; ) 
    {
        printf("Roll: %d, Name: %s, Marks: %.2f\n", s.roll, s.name, s.marks);
    }
    fclose(fptr);
    return 0;
}