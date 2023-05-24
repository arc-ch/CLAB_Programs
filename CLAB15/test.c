// #include<stdio.h>
// int main (){
// char i = '0';
// char ch = 'B';
// printf("%d", i);
// printf("%d", ch);
// return 0;
// }
#include <stdio.h>
#define MAX_LENGTH 100

void rotate_word(char word[], int len, int num_rotations) {
    // Shift the characters to the right by num_rotations positions
    for (int i = len - 1; i >= num_rotations; i--) {
        word[i] = word[i - num_rotations];
    }
    // Copy the first num_rotations characters to the end
    for (int i = 0; i < num_rotations; i++) {
        word[len - num_rotations + i] = word[i];
    }
    // Add null character at the end
    word[len] = '\0';
}

int main() {
    char str[MAX_LENGTH];
    int num_rotations, len;

    printf("Enter a string: ");
    fgets(str, MAX_LENGTH, stdin);

    printf("Enter the number of rotations: ");
    scanf("%d", &num_rotations);

    len = 0;
    // Compute the length of the string and rotate each word
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            rotate_word(str + i - len, len, num_rotations);
            len = 0;
        } else {
            len++;
        }
    }
    rotate_word(str + strlen(str) - len, len, num_rotations);

    // Print the rotated string
    for (int i = 0; str[i] != '\0'; i++) {
        printf("%c", str[i]);
    }

    return 0;
}
