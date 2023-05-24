#include<stdio.h>
int main ()
{
int a,b,c;
printf("Enter The First Integer:");
scanf("%d",&a);
printf("Enter The Second Integer:");
scanf("%d",&b);
printf("Enter The Third Integer:");
scanf("%d",&c);
if(a>b)
{
    if(a>c)
    {
    printf("%d is greatest integer",a);
    }
    else
    {
    printf("%d is greatest integer",c);
    }
}
else
{
    if(b>c)
    {
    printf("%d is greatest integer",b);
    }
    else
    {
    printf("%d is greatest integer",c);
    }
} 
return 0;
}