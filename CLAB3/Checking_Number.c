#include<stdio.h>
int main ()
{
float a;
printf("Enter The Number : ");
scanf("%f",&a);
if(a>0)
{   printf("The Number is Positive.");
}
else if(a<0)
{   printf("The Number is Negative");
}
else{
    printf("The Number is Zero");
    }
return 0;
}