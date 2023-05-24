#include<stdio.h>
int main ()
{
int m,n;    
printf("Enter The number of rows:");
scanf("%d",&m);
printf("Enter The number of columns:");
scanf("%d",&n);
int Matrix1[m][n];
int i,j;
for(i=0;i<m;i++)
{
    for(j=0;j<n;j++)
    {
        printf("Enter Elements of 1st %d%d: ",i,j);
        scanf("%d",&Matrix1[i][j]);
    }
}
int Matrix2[m][n];
for(i=0;i<m;i++)
{
    for(j=0;j<n;j++)
    {
        printf("Enter Elements of 2nd %d%d: ",i,j);
        scanf("%d",&Matrix2[i][j]);
    }
}
int Matrix3[m][n];
for(i=0;i<m;i++)
{
    for(j=0;j<n;j++)
    {
        Matrix3[i][j]=Matrix1[i][j]+Matrix2[i][j];
    }
}
for(i=0;i<m;i++)
{
    for(j=0;j<n;j++)
    {
        printf("%2d ",Matrix3[i][j]);
    }
    printf("\n");
}

return 0;
}