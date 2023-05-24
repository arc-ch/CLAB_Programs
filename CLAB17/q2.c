#include <stdio.h>
int main() {
    int value = 17;
    int *ptr = &value; //ref

    printf("Size of pointer variable: %d bytes\n", sizeof(ptr));
    printf("Size of dereferenced value: %d bytes\n", sizeof(*ptr));

    return 0;
}

// #include<stdio.h>
// int main(){
//     int a = 1;
//     float b = 2.5;
//     char c  = 'a';
//     double d = 32;
//     int *ptr1 = &a;
//     float *ptr2 =  &b;
//     char *ptr3 = &c;
//     double *ptr4 = &d;
//     printf("Size of a = %d\nSize of ptr1 = %d\n",sizeof(*ptr1),sizeof(ptr1));
//     printf("Size of b = %d\nSize of ptr2 = %d\n",sizeof(*ptr2),sizeof(ptr2));
//     printf("Size of c = %d\nSize of ptr3 = %d\n",sizeof(*ptr3),sizeof(ptr3));
//     printf("Size of d = %d\nSize of ptr4 = %d\n",sizeof(*ptr4),sizeof(ptr4));
// }