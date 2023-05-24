#include <stdio.h>
#include <string.h>

// Enter a string: THE SKY IS BLUE
// Reversed string: EULB SI YKS EHT

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
