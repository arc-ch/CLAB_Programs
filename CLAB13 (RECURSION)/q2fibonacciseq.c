#include<stdio.h>
 int Fibonacci (int n){
    if (n==0)
      return 0;
    else if (n==1)
       return 1;
    else
       return Fibonacci (n-1) + Fibonacci (n-2); //fibo(4)=fibo(3)+fibo(2)=2+1=3
 }
    
int main (){
    int n, i;
    printf ("Enter the Number of Terms: ");
     scanf ("%d", &n);
     for (i=0;i<n;i++)
       printf ("%d ",Fibonacci (i));
    return 0;
}

// #include <stdio.h>
// int fibonacci(int n) {
//     if (n <= 1) {
//         return n;
//     }
//     return fibonacci(n-1) + fibonacci(n-2);
// }

// int main() {
//     int n, i;
//     printf("Enter the number of terms: ");
//     scanf("%d", &n);
//     printf("Fibonacci series: ");
//     for (i = 0; i < n; i++) {
//         printf("%d ", fibonacci(i));
//     }
//     return 0;
// }

