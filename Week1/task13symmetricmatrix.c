#include <stdio.h>

int main() {
    int n, symmetric = 1;

    printf("Enter the number of rows and columns: ");
    scanf("%d", &n);

    int matrix[n][n];

    printf("Enter the matrix elements:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                symmetric = 0;
                break;
            }
        }
        if (!symmetric) break;
    }

    if (symmetric) {
        printf("The matrix is Symmetric.\n");
    } else {
        printf("The matrix is not Symmetric.\n");
    }

    return 0;
}
