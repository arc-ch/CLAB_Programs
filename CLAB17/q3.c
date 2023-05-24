#include <stdio.h>
int main() {
    int value = 10;
    int *ptr = &value; //referencing

    printf("Original value: %d\n", *ptr);

    // Prefix increment
    ++(*ptr);
    printf("After prefix increment: %d\n", *ptr);

    // Postfix increment
    (*ptr)++;
    printf("After postfix increment: %d\n", *ptr);

    return 0;
}
