#include <stdio.h>
int main() {
    int num, sum = 0, lastdigit;
    printf("Enter a number: ");
    scanf("%d", &num);

    while(num > 0) {
        lastdigit = num % 10;
        sum = sum + lastdigit;
        num = num/10;
    }
    printf("The sum of the digits is: %d\n", sum);
    return 0;
}
