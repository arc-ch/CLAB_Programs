#include <stdio.h>
int main(){
    char str[20];
    printf("Enter your name char by char: \n");
    for (int i =0;i<16;i++)
    {
    scanf("%s", str);
    printf("%s", str);
    }
    return 0;
}

