#include <stdio.h>

void readMarks(int marks[50][50], int n, int m);
void calculateResult(int marks[50][50], int n, int m);

int main() {
    int marks[50][50];
    int n, m;

    printf("Enter number of students: ");
    scanf("%d", &n);

    printf("Enter number of subjects: ");
    scanf("%d", &m);

    readMarks(marks, n, m);
    calculateResult(marks, n, m);

    return 0;
}

void readMarks(int marks[50][50], int n, int m) {
    int i, j;

    for (i = 0; i < n; i++) {
        printf("Enter marks for Student %d:\n", i + 1);
        for (j = 0; j < m; j++) {
            scanf("%d", &marks[i][j]);
        }
    }
}

void calculateResult(int marks[50][50], int n, int m) {
    int i, j;
    int total;
    float average;

    for (i = 0; i < n; i++) {
        total = 0;

        for (j = 0; j < m; j++) {
            total += marks[i][j];
        }

        average = (float) total / m;

        printf("Student %d -> Total = %d, Average = %.2f\n",
               i + 1, total, average);
    }
}