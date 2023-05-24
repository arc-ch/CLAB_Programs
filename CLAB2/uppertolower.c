#include <stdio.h>
int main(){
    char ch;
    printf("Enter an alphabet: ");
    scanf("%c", &ch);
    if (ch >= 'A' && ch <= 'Z') 
    { // check if the character is uppercase
        ch = ch + ('a' - 'A'); // convert to lowercase
    printf("The alphabet in lowercase is: %c\n", ch);
    }
    else
    {
        printf("Invalid Input");
    }

return 0;
}

// #include<stdio.h>
// int main(){
//     char c;
//     scanf("%c",&c);
//     if(c>='A' && c<='Z'){
//         printf("%c",c+32);
//     }
//     else
//     printf("Invalid Input");
// }