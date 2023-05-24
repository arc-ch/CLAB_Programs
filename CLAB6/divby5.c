#include<stdio.h>
int main(){
    int i,n,m;
    printf("Enter the range: ");
    scanf("%d %d",&m,&n);
    for(i=m;i<=n;i++)
    {
        if(i%5==0)
        {
           printf("%d ",i);
        }
    }
    return 0;
}