#include <stdio.h>

int main() {
    float A[20][20], B[20][20], Sum[20][20], Transpose[20][20];
    int r, c, i, j;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("\nEnter elements of Matrix A:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%f", &A[i][j]);
        }
    }

    printf("\nEnter elements of Matrix B:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            printf("B[%d][%d]: ", i, j);
            scanf("%f", &B[i][j]);
        }
    }

    // Process Addition and Transpose
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            Sum[i][j] = A[i][j] + B[i][j];
            Transpose[j][i] = A[i][j]; // Rows map to Columns
        }
    }

    printf("\n--- Result 1: Matrix Addition (A + B) ---\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            printf("%.2f\t", Sum[i][j]);
        }
        printf("\n");
    }

    printf("\n--- Result 2: Transpose of Matrix A ---\n");
    for(i = 0; i < c; i++) { // Outer loop runs up to columns 'c'
        for(j = 0; j < r; j++) { // Inner loop runs up to rows 'r'
            printf("%.2f\t", Transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
