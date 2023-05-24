#include <stdio.h>
int main() {
   int m, n, p, q, i, j, k;

   printf("Enter the dimensions of matrix A: ");
   scanf("%d%d", &m, &n);
   printf("Enter the dimensions of matrix B: ");
   scanf("%d%d", &p, &q);

   if(n==p)
        printf("Matrices can be multiplied\n");
   if(n != p) 
        {
       printf("Matrices cannot be multiplied\n");
       return 0;
        }

   // Initializing Matrices
   int A[m][n], B[p][q], C[m][q];

   printf("Enter the values of matrix A: ");
   for(i=0; i<m; i++) {
       for(j=0; j<n; j++) {
           scanf("%d", &A[i][j]);
       }
   }

   printf("Enter the values of matrix B: ");
   for(i=0; i<p; i++) {
       for(j=0; j<q; j++) {
           scanf("%d", &B[i][j]);
       }
   }

   // Multiply A and B
   for(i=0; i<m; i++) {
       for(j=0; j<q; j++) {
           C[i][j] = 0;
           for(k=0; k<n; k++) {
               C[i][j] += A[i][k] * B[k][j];
           }
       }
   }

   printf("Resultant matrix C:\n");
   for(i=0; i<m; i++) {
       for(j=0; j<q; j++) {
           printf("% d ", C[i][j]);
       }
       printf("\n");
   }
   return 0;
}