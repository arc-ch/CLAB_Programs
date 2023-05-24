#include <stdio.h>

int main() {
    int matrix[10][10];
    int rows, cols;

    // Take user input for matrix size
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    // Take user input for matrix elements
    printf("Enter matrix elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Print original matrix
    printf("Original matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Transpose border elements
    for (int j = 1; j < cols-1; j++) {
        int temp = matrix[0][j];
        matrix[0][j] = matrix[rows-1][j];
        matrix[rows-1][j] = temp;
    }

    for (int i = 1; i < rows-1; i++) {
        int temp = matrix[i][0];
        matrix[i][0] = matrix[i][cols-1];
        matrix[i][cols-1] = temp;
    }

    int temp = matrix[0][1];
    matrix[0][1] = matrix[1][0];
    matrix[1][0] = temp;

    // Print transposed border elements
    printf("Transposed border elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if ((i == 0 || i == rows-1 || j == 0 || j == cols-1) && (i != j && i+j != rows-1)) {
                printf("%d ", matrix[j][i]);
            }
            else {
                printf("%d ", matrix[i][j]);
            }
        }
        printf("\n");
    }

    return 0;
}
