#include<stdio.h> 
int main() {  
    int n;  
    printf("Enter a number: ");  
    scanf("%d", &n);  
    (n % 2 == 0) ?  //condition
    (printf("%d is an Even number.", n)) : //statement1
    (printf("%d is an Odd  number.", n));  //statement2
    return 0;  
}  