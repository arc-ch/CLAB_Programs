#include<stdio.h>
int main(){
    float a;
    printf("Enter Number A = %f",a);
    scanf("%f",&a);
    float b;
    printf("Enter Number B = %f",b);
    scanf("%f",&b);
    float c = a + b;
    printf("The Addition of A and B = %f",c);
    float d = a - b;
    printf("The Subtraction of A and B = %f",d);
    float e = a * b;
    printf("The Product of A and B = %f",e);
    float f = a/b;
    printf("The Division of A and B = %f",f);
    return 0;
}