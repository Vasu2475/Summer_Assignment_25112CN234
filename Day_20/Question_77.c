//WAP to multiply matrices
#include <stdio.h>
int main() {
    int a[10][10], b[10][10], c[10][10];
    int m, n, x, y, i, j, k;
    printf("Enter the number of rows for the first matrix: ");
    scanf("%d", &m);
    printf("Enter the number of columns for the first matrix: ");
    scanf("%d", &n);
    printf("Enter the number of rows for the second matrix: ");
    scanf("%d", &x);
    printf("Enter the number of columns for the second matrix: ");
    scanf("%d", &y);
    if (n!=x) {
        printf("Column of first matrix must be equal to row of second matrix.\n");
        return 0;
    }
    printf("\nEnter elements of the first matrix:\n");
    for (i=0; i<m; i++) {
        for (j=0; j<n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nEnter elements of the second matrix:\n");
    for (i=0; i<x; i++) {
        for (j=0; j<y; j++) {
            scanf("%d", &b[i][j]);
        }
    }
    for (i = 0; i < m; i++) {
        for (j = 0; j < y; j++) {
            c[i][j] = 0;
        }
    }
    for (i = 0; i < m; i++) {
        for (j = 0; j < y; j++) {
            for (k = 0; k < n; ++k) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    printf("\nOutput Matrix:\n");
    for (i=0; i<m; i++) {
        for (j=0; j<y; j++) {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}
