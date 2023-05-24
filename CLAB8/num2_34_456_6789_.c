#include<stdio.h>
int main(){
int n;
int x = 2;
printf("Enter Number: ");
scanf("%d",&n);
for(int i=1;i<=n;i++)
{
	int A = x;
    for(int j=1;j<=i;j++)
	    {    
		printf("%3d",A);
        A++;
	    }
    x++;    
	printf("\n");
}
return 0;
}
