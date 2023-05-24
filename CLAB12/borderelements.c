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
            scanf("%2d", &matrix[i][j]);
        }
    }

    // Print boundary elements
    printf("Boundary elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (i == 0 || i == rows-1 || j == 0 || j == cols-1) {
                printf("%d ", matrix[i][j]);
            }
            else {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}
