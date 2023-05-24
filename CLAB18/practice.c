#include <stdio.h>
#include <string.h>

void reverseString(char* str) {
    int i, j, k;
    int len = strlen(str);

    for (i = 0, j = 0, k = 0; i <= len; i++) {
        if (str[i] == ' ' || str[i] == '\0') {
            for (k = (str[i] == ' ' ? i - 1 : i), j = j; j < k; j++, k--) {
                // Swap characters
                char temp = str[j];
                str[j] = str[k];
                str[k] = temp;
            }
            j = i + 1;
        }
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%99[^\n]", str);  // Read input (up to 99 characters)

    printf("Original string: %s\n", str);

    reverseString(str);
    printf("Reversed string: %s\n", str);

    return 0;
}
