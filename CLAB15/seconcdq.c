#include <stdio.h>
int main() {
    char str1[100], str2[100];
    int i, flag = 1;
    printf("Enter the first and second string: ");
    scanf("%s %s", str1, str2);

    for(i=0; str1[i]!='\0' || str2[i]!='\0'; i++) {
        if(str1[i] != str2[i]) {
            flag = 0;
            break;
        }
    }
    if(flag == 1) {
        printf("1\n");
    } else {
        printf("0\n");
    }
    return 0;
}
