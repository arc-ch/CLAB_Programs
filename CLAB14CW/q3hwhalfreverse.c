#include <stdio.h>
int main() {
    char str[] = "ABCD XYZ";
    printf("The Original string:\n");
    printf("%s\n", str);
    int n = 8;
    printf("The Modified string:\n");
    while(str[n] != ' ') {
        printf("%c", str[n]);
        n--;
        
    }
    
    n = 0;
    printf(" ");
    while(str[n] != ' ') {
        printf("%c", str[n]);
        n++;
    }
    return 0;
}


// #include<stdio.h>
// #include<string.h>
// int main(){
//     char str[50];
//     printf("The Original string:\n");
//     scanf("%[^\n]s", &str);
//     int n=strlen(str);
//     // int n = sizeof(str)/sizeof(str[0]);
//     n=n-1;
//     while(str[n] != ' '){
//         printf("%c",str[n]);
//         n--;
//     }
//     n = 0;
//     printf(" ");
//     while(str[n] != ' ')
//         {
//         printf("%c",str[n]);
//         n++;
//         }
//     return 0;
// }