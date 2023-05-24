#include <stdio.h>
int main() {
    char str[] = "Archit Choudhury";
    int i;
    for (i = 0; str[i]!='\0'; i++); // or for (i = 0; str[i]; i++);
    printf("Length of name is: %d", i);
    return 0;
}
