#include <stdio.h>
int main() {
    char str[100];
    int i;
    printf("Enter a string: ");
    scanf("%[^\n]s", str);

    for(i = 0; str[i]!= '\0'; i++) {
        if(str[i] >= 'A' && str[i] <= 'Z') { //A=65+32=97=a
            str[i] = str[i] + 32; // convert uppercase to lowercase
        } else if(str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32; // convert lowercase to uppercase
        }
    }
    printf("String with Alternate Alphabet Case: %s\n", str);
    return 0;
}
