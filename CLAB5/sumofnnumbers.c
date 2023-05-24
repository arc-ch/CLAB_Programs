#include <stdio.h>
int main() {
    int n, i, sum = 0;
    printf("Enter the total number of natural numbers to get the sum: ");
    scanf("%d", &n);
    for (i = 1; i <= n;i++) {
        sum= sum+i;
        }
    printf("Sum = %d", sum);
    return 0;
}

