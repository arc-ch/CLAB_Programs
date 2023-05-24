#include<stdio.h>
int main(){
    float f;
    printf("Enter Value in Fahrenheit = %f",f);
    scanf("%f",&f);
    float c = 5*(f - 32)/9;
    printf("The Given Temperature in Centigrade is %f",c);
    return 0;
}