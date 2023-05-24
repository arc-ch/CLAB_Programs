#include <stdio.h>
int main() {
    int n, i;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    if (n == 1) {
        printf("Smallest divisor of %d is %d", n, n);}
    else {
        for (i = 2; i <= n; i++) {
            if (n % i == 0) {
                printf("Smallest divisor of %d is %d", n,i);
                break;
            }
        }
    }
    return 0;
}
