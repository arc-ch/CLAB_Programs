// #include <stdio.h>
// int main() {
//    char str[] = "ABCD";
//    char reverse_str[5]; 
//    int i, j;
//    for (i = 3, j = 0; i >= 0; i--, j++) { // 
//       reverse_str[j] = str[i];
//    }
//    reverse_str[j] = '\0';
//    printf("%s", reverse_str); 
//    return 0;
// }

// USER INPUT 
#include <stdio.h>
#include <string.h>

int my_strlen(char str[]) {      //MAKING OWN strlen() FUNCTION
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
}
int main() {
    char str[100];
    int i, len;
    char temp;

    printf("Enter a string: ");
    scanf("%[^\n]s", str);

    len = my_strlen(str);

    for (i = 0; i < len/2; i++) {
        temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }

    printf("Reversed string: %s", str);

    return 0;
}
