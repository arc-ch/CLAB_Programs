#include<stdio.h>
int main ()
{
int a;
printf("Enter the number to check divisibility:");
scanf("%d",&a);
if(a%5==0&&a%3==0){
    printf("%d is Divisible By 3 and 5",a);
    }
else{
        printf("%d is not by Divisible by 3 and 5",a);
        }
return 0;
}
