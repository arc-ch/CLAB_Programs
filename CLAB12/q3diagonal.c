#include <stdio.h>
int main()
{
    int m;
    printf("Enter The Dimension of Square Matrix (Odd Order):");
    scanf("%d", &m);
    int Matrix[m][m];
    int i, j;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("Enter Elements %d%d: ", i, j);
            scanf("%d", &Matrix[i][j]);
        }
    }

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (i == j || i + j== m-1)
                printf("%2d", Matrix[i][j]);
            else
                printf("  ");    
        }
        printf("\n");
    }
return 0;    
}
