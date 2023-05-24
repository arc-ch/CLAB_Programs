#include<stdio.h>
int main(){
   int n, count=0, i;
   printf("Enter a Number: ");
   scanf("%d", &n);
   for (i=1; i<=n; i++)
   {
      if(n%i==0){
         count++;
      }
   }
   if (count==2) //count=2 as prime num only has 2 factors
   printf("%d is a Prime number.", n );
   else{
   printf("%d is not a Prime number.", n);
    }
   return 0;
}

// #include <stdio.h>
// int main(){
//     int count = 0, a, b, i, I;
//     printf("Enter The Starting Number: ");
//     scanf("%d", &a);
//     printf("Enter The Ending Number: ");
//     scanf("%d", &b);
//     for (I = a; I <= b; I++)
//     {
//         for (i = 2; i < I; i++) 
//         {   
//             if (I % i == 0)
//             {
//                 count = 1;
//                 break;
//             }
//             else
//             count = 0;
//         }
//         if (count == 0)
//             printf("%d ", I);
//         else
//             continue;
//     }
//     return 0;
// }
