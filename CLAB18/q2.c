#include <stdio.h>
int main()
{
    int x=2, y=3, *ptr1, *ptr2, *temp;
    ptr1=&x;
    ptr2=&y;

    printf("Before Swap: \n");
    printf("Value of x: %d\n", *ptr1);
    printf("Value of y: %d\n", *ptr2);

    temp=ptr1;
    ptr1=ptr2;
    ptr2=temp;

    printf("After Swap: \n");
    printf("Value of x: %d\n", *ptr1);
    printf("Value of y: %d\n", *ptr2);

    return 0;
}

// #include <stdio.h>
// void swap(int *x, int *y) {
//     int temp = *x;
//     *x = *y;
//     *y = temp;
// }

// int main() {
//     int a, b;
//     printf("Enter two numbers: ");
//     scanf("%d %d", &a, &b);
//     printf("Original values: a = %d, b = %d\n", a, b);
//     swap(&a, &b);
//     printf("Swapped values: a = %d, b = %d\n", a, b);
//     return 0;
// }