#include <stdio.h>
int main(){
    int x;
    printf("Enter the number to check even or odd: ");
    scanf("%d", &x);
    switch(x % 2)
    {
        case 0: 
            printf("Number is Even");
            break;
        case 1: 
            printf("Number is Odd");
            break;
    }
return 0;
}