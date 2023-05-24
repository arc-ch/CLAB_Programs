#include<stdio.h>
#include<math.h>
int main(){
    float s,a,b,c;
    printf("Enter The First Side Of THe Triangle :");
    scanf("%f",&a);
    printf("Enter The Second Side Of The Triangle :");
    scanf("%f",&b);
    printf("Enter The Third Side Of THe Triangle :");
    scanf("%f",&c);
    s = (a+b+c)/2;
    float A = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area Of The Triangle is %f",A);
return 0;
}