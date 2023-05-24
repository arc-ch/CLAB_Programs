#include<stdio.h>
int main()
{
	printf("The Sum of Series Is 1+x+x^2+x^3+.....x^n\n");
	int x,n;
	printf("Enter The Value Of x:");
	scanf("%d",&x);
	printf("Enter The Value Of n:");
	scanf("%d",&n);
	int sum=1;
	int power=1;
	for(int i=1;i<=n;i++)
	{
		power=power*x;
		sum=sum+power;
	}
	printf("The SUM is %d",sum);
	return 0;
}