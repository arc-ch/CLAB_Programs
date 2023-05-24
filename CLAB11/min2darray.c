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
int min= Matrix[0][0];
for(i=0;i<m;i++)
{
    for(j=0;j<n;j++)
    {
        if(min > Matrix[i][j])
        {
            min = Matrix[i][j];
        }
        else
        {
            continue;
        }
    }
}
printf("Minimum Among all the elements: %d",min);
return 0;
}