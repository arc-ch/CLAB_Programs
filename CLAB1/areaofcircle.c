#include<stdio.h>
int main(){
    float radius;
    printf("Enter Radius : ");
    scanf("%f",&radius);
    float pi = 3.1415629;
    float area = pi*radius*radius;
    printf("The area of Circle is :%f",area);
    return 0;
}