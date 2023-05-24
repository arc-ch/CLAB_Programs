#include<stdio.h>
int main ()
{
    float CP, SP;
    printf("Enter The Cost Price : ");
    scanf("%f",&CP);
    printf("Enter The Selling Price : ");
    scanf("%f",&SP);
    float P = SP - CP;
    float L = CP - SP;
    if(CP>SP)
        {
            printf("The seller Made A loss of %f",L);
        }
    else if (SP>CP)
        {
            printf("The seller Made A Profit of %f",P);
        }  
    else  {
        printf(" The seller made neither profit nor loss");
    }
}