#include <stdio.h>
int main()
{
    int n, i, j, a, b, sum;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        a = 0;
        b = 1;
        for(j = 1; j <= i; j++)
        {
            printf("%d ", b);
            sum = a + b;
            a = b;
            b = sum;
        }
        printf("\n");
    }
    return 0;
}

// 1
// 1 1
// 1 1 2
// 1 1 2 3
// 1 1 2 3 5
// 1 1 2 3 5 8 