#include <stdio.h>
int main() {
    int value = 10;
    int *ptr = &value;

    printf("Original value: %d\n", *ptr);

    // Prefix decrement
    --(*ptr);
    printf("After prefix decrement: %d\n", *ptr);

    // Postfix decrement
    (*ptr)--;
    printf("After postfix decrement: %d\n", *ptr);

    return 0;
}
