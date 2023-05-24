#include<stdio.h>
int main (){
    float a,b,c;
    printf("Enter the length of side 1:");
    scanf("%f",&a);
    printf("Enter the length of side 2:");
    scanf("%f",&b);
    printf("Enter the length of side 3:");
    scanf("%f",&c);
    if(a+b>c && b+c>a && a+c>b)
    { 
        if(a==b && b==c)
        {
            printf("The triangle is an Equilateral Triangle");
        }
        else if(a==b|| b==c|| c==a)
        {
            printf("The triangle is an Isosceles Triangle");
        }
        else
        {
            printf("The triangle is a Scalene Triangle");
        }
    }
    else
    {
        printf("Triangle will not be formed");
    }
return 0;
}