#include<stdio.h>
int main ()
{
int a,b;
printf("Enter The First Integer:");
scanf("%d",&a);
printf("Enter The Second Integer:");
scanf("%d",&b);
if(a > b)
{
    printf("%d is greater than %d",a ,b);
}
else
{
    printf("%d is greater than %d", b, a);
}    
return 0;
}