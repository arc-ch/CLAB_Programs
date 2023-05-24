#include <stdio.h>
int main() {
    char name[] = "Today is Monday";
    int i;
    for (i = 0; name[i]!= '\0'; i++);
    printf("%s", name);
    return 0;
}

