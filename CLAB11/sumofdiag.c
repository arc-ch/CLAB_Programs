#include<stdio.h>
int main ()
{
    //ONLY VALID FOR SQUARE MATRIX//
int m,n;    
printf("Enter The number of rows:");
scanf("%d",&m);
printf("Enter The number of columns:");
scanf("%d",&n);
int Matrix[m][n];
int i,j;
for(i=0;i<m;i++)
{
    for(j=0;j<n;j++)
    {
        printf("Enter Elements %d%d: ",i,j);
        scanf("%d",&Matrix[i][j]);
    }
}
printf("The Diagonal Elements are: ");
int sum=0;
for(int k=0;k<m;k++)
{
    
    printf("%d ",Matrix[k][k]);
    sum = sum + Matrix[k][k];
}
printf("\nThe Sum Of the Diagonal Elements is %d",sum);
return 0;
}