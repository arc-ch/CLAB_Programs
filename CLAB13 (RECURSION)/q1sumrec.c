#include <stdio.h>
int sum(int n) {
   if (n == 0) 
      return 0;
   else 
      return (n + sum(n - 1)); //sum(5)= 5+sum(4)
}

int main() {
   int n, result;
   printf("Enter a positive integer: ");
   scanf("%d", &n);
   result = sum(n);
   printf("Sum of numbers from 1 to %d is %d\n", n, result);
   return 0;
}
