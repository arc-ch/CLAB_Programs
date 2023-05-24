#include <stdio.h>
int main(){
   int start, end, count, unit, tenth;
   printf("Enter The range to print prime numbers: ");
   scanf("%d %d", &start, &end);
   for (int i=start; i<=end; i++){ 
      count=0;
      unit = i % 10; tenth = (i / 10) % 10; //460= 460/10=46=46%10=4
      if (unit == 3 || tenth == 3)
      for(int j=1; j<=i; j++){
         if(i%j==0)
            count++;
      }
      if (count==2) { //count=2 as prime num has exactly 2 factors
            printf("%d ", i );
      }
   }
   return 0;
}

// #include <stdio.h>
// int main() {
//    int start, end;
//    printf("Enter the range to find prime numbers: ");
//    scanf("%d %d", &start, &end);
//    printf("Prime numbers between %d & %d with unit or tenth digit-3 are: \n", start, end);
//    for (int i = start; i <= end; i++) {
//       int prime = 1;
//       if (i % 10 == 3 || (i / 10) % 10 == 3) {
//          for (int j = 2; j <= i / 2; j++) {
//             if (i % j == 0) {
//                prime = 0;
//                break;
//             }
//          }
//          if (prime == 1) {
//             printf("%d ", i);
//          }
//       }
//    }
//    return 0;
// }
