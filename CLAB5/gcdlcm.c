#include <stdio.h>
int main() {  
    int n1, n2, gcd=1, lcm, i = 1, small; 
    printf("Enter 2 integer numbers: ");  
    scanf("%d%d", &n1, &n2);  
    small = (n1 < n2) ? n1 : n2;  //ternary operator-(expression?if:else)
    while(i <= small){  //
        if(n1 % i == 0 && n2 % i == 0){  
        gcd = i;}  
        i++;  
    }  
    lcm = ( n1 * n2 ) / gcd;  //lcm- directformula
    printf("GCD = %d\nLCM = %d\n", gcd, lcm);  
    return 0;  
}
