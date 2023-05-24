#include <stdio.h>
int sum(int, int);
int main() {
    int a, b;
    printf("Enter two integers to add: ");
    scanf("%d%d", &a, &b);
    printf("The sum of %d and %d is %d\n", a, b, sum(a, b));
    return 0;
}

int sum(int num1, int num2) {
    int result;
    result = num1 + num2;
    return result;
}
