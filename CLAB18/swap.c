#include <stdio.h>
int main()
{
    int x=5, y=7, *ptr1, *ptr2, *temp;
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
