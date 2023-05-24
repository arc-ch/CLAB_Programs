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
for(i=0;i<m;i++)
{
    for(j=0;j<n;j++)
    {
        printf("%2d",Matrix[i][j]);
    }
    printf("\n");
}
return 0;
}