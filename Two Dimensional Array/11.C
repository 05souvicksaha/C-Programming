#include <stdio.h>

void readMatrix(int m[10][10], int r, int c);
void multiplyMatrix(
    int a[10][10], int b[10][10],
    int result[10][10],
    int r1, int c1, int c2
);
void displayMatrix(int m[10][10], int r, int c);

int main() {
    int a[10][10], b[10][10], result[10][10];
    int r1, c1, r2, c2;

    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &r2, &c2);

    if (c1 != r2) {
        printf("Matrix multiplication not possible.\n");
        return 0;
    }

    printf("Enter elements of first matrix:\n");
    readMatrix(a, r1, c1);

    printf("Enter elements of second matrix:\n");
    readMatrix(b, r2, c2);

    multiplyMatrix(a, b, result, r1, c1, c2);

    printf("Resultant matrix:\n");
    displayMatrix(result, r1, c2);

    return 0;
}

void readMatrix(int m[10][10], int r, int c) {
    int i, j;
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &m[i][j]);
        }
    }
}

void multiplyMatrix(
    int a[10][10], int b[10][10],
    int result[10][10],
    int r1, int c1, int c2
) {
    int i, j, k;

    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            result[i][j] = 0;
            for (k = 0; k < c1; k++) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

void displayMatrix(int m[10][10], int r, int c) {
    int i, j;
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
}
