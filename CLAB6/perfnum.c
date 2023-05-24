#include<stdio.h>  
int main(){   
    int i, n, Sum = 0 ;   
    printf("Enter a Number: ");   
    scanf("%d", &n) ;   
    for(i=1; i<n ; i++){   
        if(n % i == 0)   
         Sum = Sum + i ;   }    
    if (Sum == n) {  
    printf("%d is a Perfect Number", n); }
    else   {
    printf("%d is not the Perfect Number", n); }  
return 0 ;   
}