#include <stdio.h>
int sumOfDigits(int n) {
    if (n == 0) {
        return 0;
    }
    return (n % 10 + sumOfDigits(n / 10));
}
int main() {
    int n, sum;
    printf("Enter a number: ");
    scanf("%d", &n);
    sum = sumOfDigits(n);
    printf("The sum of digits of %d is %d", n, sum);
    return 0;
}


