#include<stdio.h>
int main()
{
	int num,a,b,c,d,e,x;
	printf("Enter a five digit number : ");
	scanf("%d", &num);
	e=num%10;
	d=(num/10)%10;
	c=(num/100)%10;
	b=(num/1000)%10;
	a=(num/10000);
	x= e*10000+d*1000+c*100+b*10+a;
	printf("%d is the reversed number\n",x);
    if(x>num){
        printf("The reversed number is greater than the original number");
    }
    else if (num>x){
        printf("The reversed number is smaller than the original number");
    }
    else{
        printf("The reversed number is equal to the original number");
    }
	return 0;
}
