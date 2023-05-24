#include <stdio.h>
int main() {
    int num = 10;
    float pi = 3.14;
    char letter = 'A';

    int *iPtr = &num; //REFERENCING I.E GETTING ADDRESS
    float *fPtr = &pi;
    char *chPtr = &letter;

    
    printf("Integer value: %d\n", *iPtr); //DEREFERENCING I.E GETTING VALUE
    printf("Float value : %f\n", *fPtr);
    printf("Char value : %c\n", *chPtr);
    return 0;
}
