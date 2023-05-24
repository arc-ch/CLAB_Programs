#include <stdio.h>
int Max(int a, int b) {
    if (a > b) 
        return a;
    else 
        return b;
}

int main() {
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    printf("Original values: x = %d, y = %d\n", x, y);
    int max = Max(x, y);
    printf("The greatest value is: %d\n", max);
    return 0;
}
