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
    int searchRoll, found = 0;
    printf("Enter filename to search in: ");
    scanf("%s", filename);
    fptr = fopen(filename, "r");
    if (fptr == NULL) 
    {
        printf("Error: File not found.\n");
        exit(1);
    }
    printf("Enter Roll Number to search: ");
    scanf("%d", &searchRoll);
    for (; fscanf(fptr, "%d %s %f", &s.roll, s.name, &s.marks) == 3; ) 
    {
        if (s.roll == searchRoll) 
        {
            printf("\n--- Record Found ---\n");
            printf("Name: %s\nMarks: %.2f\n", s.name, s.marks);
            found = 1;
            break; 
        }
    }
    if (!found) 
    {
        printf("\nStudent with Roll Number %d not found.\n", searchRoll);
    }
    fclose(fptr);
    return 0;
}