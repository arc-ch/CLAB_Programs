#include <stdio.h>
int main() {
    char str[] = "ABCD DEF XYZ";
    int i, n = 13, start = 0;
    for (i = 0; i <= n; i++) {
        if (str[i] == ' ' || str[i] == '\0') {
            int j;
            for (j = start; j < (start + i) / 2; j++) {
                char temp = str[j];
                str[j] = str[start + i - j - 1];
                str[start + i - j - 1] = temp;
            }
            start = i + 1;
        }
    }

    printf("Reversed string: ");
    for (i = 0; i < n; i++) {
        if (str[i] == ' ') {
            printf(" ");
        } else {
            printf("%c", str[i]);
        }
    }
    printf("\n");
    return 0;
}

