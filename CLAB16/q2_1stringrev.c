// #include <stdio.h>
// int main() {
//     char str[] = "ABCD DEF XYZ";
//     int i, n = 13, start = 0;
//     for (i = 0; i <= n; i++) {
//         if (str[i] == ' ' || str[i] == '\0') {
//             int j;
//             for (j = start; j < (start + i) / 2; j++) {
//                 char temp = str[j];
//                 str[j] = str[start + i - j - 1];
//                 str[start + i - j - 1] = temp;
//             }
//             start = i + 1;
//         }
//     }

//     printf("Reversed string: ");
//     for (i = 0; i < n; i++) {
//         if (str[i] == ' ') {
//             printf(" ");
//         } else {
//             printf("%c", str[i]);
//         }
//     }
//     printf("\n");
//     return 0;
// }


#include <stdio.h>
void reverse_word(char str[], int start, int end) {
    int i, j;
    char temp;
    for (i = start, j = end; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int main() {
    char str[] = "ABCD DEF XYZ";
    int i, n = 0, start = 0;

    while (str[n] != '\0') {
        n++;
    }

    for (i = 0; i <= n; i++) {
        if (str[i] == ' ' || str[i] == '\0') {
            reverse_word(str, start, i - 1);
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
