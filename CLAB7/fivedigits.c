#include <stdio.h>
int main() {
    int i, j, k = 1; 
   for (int i = 1; i <=4; i++) {
      for (int j = 1; j <=5; j++){
         printf("%2d ", k);
         k++;}
      printf("\n");
   }
   return 0;
}
// #include <stdio.h>
// int main() {
//     int i, j, m, n;
//     printf("Enter rows and column:");
//     scanf("%d%d",&m, &n);
//     int k = 1;
//    for (int i = 1; i <=m; i++) {
//       for (int j = 1; j <=n; j++) 
//       {
//          printf("%2d ", k);
//          k++;
//       }
//       printf("\n");
//    }
//    return 0;
// }
