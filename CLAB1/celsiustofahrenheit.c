#include<stdio.h>
int main(){
    float c,f;
    printf("Enter The Temperature In Centigrade :");
    scanf("%f",&c);
    f = (c*9/5)+32;
    printf("The Temperature In Fahrenheit is %f",f);
    return 0;
}