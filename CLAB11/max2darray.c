#include<stdio.h>
int main ()
{
int m,n;    
printf("Enter The number of rows:");
scanf("%d",&m);
printf("Enter The number of column:");
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
int max= Matrix[0][0];
for(i=0;i<m;i++)
{
    for(j=0;j<n;j++)
    {
        if(max < Matrix[i][j])
        {
            max = Matrix[i][j];
        }
        else
        {
            continue;
        }
    }
}
printf("Maximum Among all the elements: %d",max);
return 0;
}