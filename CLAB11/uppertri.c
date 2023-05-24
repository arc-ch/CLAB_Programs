#include<stdio.h>
int main ()
{
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
printf("Upper Triangular Matrix elements are:\n");
for(i=0;i<m;i++)
{
    for(j=0;j<n;j++)
    {
        if(i<=j)
        {
            printf("%d ",Matrix[i][j]);
        }
    }
}
printf("\nLower Triangular Matrix elements are:\n");
for(i=0;i<m;i++)
{
    for(j=0;j<n;j++)
    {
        if(i>=j)
        {
            printf("%d ",Matrix[i][j]);
        }
    }
}
return 0;
}