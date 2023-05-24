#include <stdio.h>
int main() {
    int matrix[10][10];
    int m, n;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &m, &n);
    
    printf("Enter matrix elements:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    //Prints OG Matrix
     printf("Original matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%2d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Transpose matrix with inside elements unchanged
    int transpose[10][10];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i == 0 || i == n-1 || j == 0 || j == m-1) {
                transpose[i][j] = matrix[j][i];
            } else {
                transpose[i][j] = matrix[i][j];
            }
        }
    }

    // Prints Transposed Matrix with inside elements unchanged
    printf("Transpose matrix with inside elements unchanged:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%2d ", transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}
