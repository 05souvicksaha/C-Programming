#include <stdio.h>

int main() {
    int marks;
    char grade;

    printf("Enter marks (0 - 100): ");
    scanf("%d", &marks);

    // Integer division to categorize marks
    switch (marks / 10) {
        case 10:
        case 9:
            grade = 'A';
            break;
        case 8:
            grade = 'B';
            break;
        case 7:
            grade = 'C';
            break;
        case 6:
            grade = 'D';
            break;
        default:
            grade = 'F';
            break;
    }

    printf("Grade: %c\n", grade);
    return 0;
}