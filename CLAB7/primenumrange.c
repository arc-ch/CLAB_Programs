#include <stdio.h>
int main(){
   int start, end, i, j, count;
   printf("Enter The Starting Number: ");
    scanf("%d", &start);
    printf("Enter The Ending Number: ");
    scanf("%d", &end);
   for (i=start; i<=end; i++)
   { count=0;
      for(j=1; j<=i; j++)
      {
         if(i%j==0)
         count++;
      }
   if (count==2) //count=2 as prime num only has 2 factors
   printf("%d ", i );
   }
   return 0;
}


// #include <stdio.h>
// int main() {
//    int start, end;
//    printf("Enter the range to find prime numbers: ");
//    scanf("%d %d", &start, &end);
//    printf("Prime numbers between %d and %d are: ", start, end);
//    for (int i = start; i <= end; i++) {
//       int prime = 1;
//       for (int j = 2; j <= i / 2; j++) {
//          if (i % j == 0) {
//             prime = 0;
//             break;
//          }
//       }
//       if (prime == 1) {
//          printf("%d ", i);
//       }
//    }
//    return 0;
// }

