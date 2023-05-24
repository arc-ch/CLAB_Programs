#include<stdio.h>
int main(){
    float b;
    printf("Enter Base Length Of the Triangle : %f",b);
    scanf("%f",&b);
    float h;
    printf("Enter Height of the Triangle : %f",h);
    scanf("%f",&h);
    float A = b*h/2;
    printf("Area Of The Triangle is %f",A);
    return 0;
}