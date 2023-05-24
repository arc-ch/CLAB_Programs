#include<stdio.h>
int main(){
	int n;
	int i,j;
	printf("Enter the number: ");
	scanf("%d",&n);
	//Upper Half Pattern
	for(i=1;i<=n;i++)
	{
		for(j=i;j<=n;j++)
		{ 
            printf("*");
		}
		for(j=1;j<=(i*2-2);j++)
		{                                 
	        	printf(" ");
		}
		for(j=i;j<=n;j++)
		{
	        	printf("*");
		}
		printf("\n");
	}
	//Lower Half pattern
	for(i=1;i<=n-1;i++)
	{
		for(j=1;j<=i;j++)
		{                          
   	        	printf("*");
		}
		for(j=1;j<=(n*2-i*2);j++)
		{  
            printf(" ");
		}
		for(j=1;j<=i;j++)
		{
		       printf("*");
		}
		printf("\n");
	}
}
