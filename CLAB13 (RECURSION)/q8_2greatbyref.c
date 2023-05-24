#include <stdio.h>
void Max(int a, int b, int *result) {
    if (a > b) {
        *result = a;
    } else {
        *result = b;
    }
}
int main() {
    int x, y, max;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    printf("Original values: x = %d, y = %d\n", x, y);
    Max(x, y, &max);
    printf("The greatest value is: %d\n", max);
    return 0;
}
