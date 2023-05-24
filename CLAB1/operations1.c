#include<stdio.h>
int main(){
    float a;
    printf("Enter Number A = %f",a);
    scanf("%f",&a);
    float b;
    printf("Enter Number B = %f",b);
    scanf("%f",&b);
    float c = a + b;
    float d = a - b;
    float e = a * b;
    float f = a/b;
    printf("The Addition of A and B = %f",c);
    printf("The Subtraction of A and B = %f",d);
    printf("The Product of A and B = %f",e);
    printf("The Division of A and B = %f",f);
    return 0;
}