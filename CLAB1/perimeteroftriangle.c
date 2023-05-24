#include<stdio.h>
int main(){
    float radius;
    printf("Enter Radius : ");
    scanf("%f",&radius);
    float pi = 3.1415629;
    float perimeter = 2*pi*radius;
    printf("The perimeter of Circle is :%f",perimeter);
    return 0;
}