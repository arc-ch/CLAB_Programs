#include <stdio.h>

int main() {
    int matrix[100][100];
    int m, n, colSum;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &m, &n);

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("Enter Element %d%d: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Initialize the sum matrix to 0
    int sumMatrix[1][100] = {0};

    // Finds sum of each column and stores it in the sum matrix
    for (int j = 0; j < n; j++) {
        colSum = 0;
        for (int i = 0; i < m; i++) {
            colSum += matrix[i][j];
        }
        sumMatrix[0][j] = colSum;
    }

    printf("The Summation Array is: \n");
    for (int j = 0; j < n; j++) {
        printf("%3d ", sumMatrix[0][j]);
    }

    // New matrix to store OG matrix & sumMatrix
    int newMatrix[101][100];

    // Copies OG matrix & sumMatrix into newMatrix
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            newMatrix[i][j] = matrix[i][j];
        }
    }
    for (int j = 0; j < n; j++) {
        newMatrix[m][j] = sumMatrix[0][j];
    }

    // // Prints new matrix with sum row (2.1)
    // printf("\nNew Matrix with column sums:\n");
    // for (int i = 0; i <= m; i++) {
    //     for (int j = 0; j < n; j++) {
    //         printf("%3d ", newMatrix[i][j]);
    //     }
    //     printf("\n");
    // }

    // Another matrix to store the new matrix with column sums
    int finalMatrix[102][100];

    // Copies newMatrix into finalMatrix
    for (int i = 0; i <= m; i++) {
        for (int j = 0; j < n; j++) {
            finalMatrix[i][j] = newMatrix[i][j];
        }
    }

    // Prints finalMatrix with new matrix with column sums
    printf("\nFinal Matrix with new matrix with column sums:\n");
    for (int i = 0; i <= m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%3d ", finalMatrix[i][j]);
        }
        printf("\n");
    }
 printf("Border elements:\n");
    for (int i = 0; i < m+1; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 || i == m || j == 0 || j == n-1) {
                printf("%2d ", finalMatrix[i][j]);
            }
            else {
                printf("   ");
            }
        }
        printf("\n");
    }

    return 0;
}

