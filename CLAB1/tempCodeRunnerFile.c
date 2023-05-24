#include<stdio.h>
int main(){
    int a;
    printf("Enter The Number :");
    scanf("%d",&a);
    // if(a%5==0)
    // {
    //     if(a%3==0)
    //     {
    //         printf("The Number %d is divisible by 3 and 5",a);
    //     }
    //     else 
    //         {
    //         printf("The Number %d is divisible ONLY by 5",a);
    //         }    
    // }
    // if(a%5!=0)
    // {
    //     if(a%3!=0)
    //     {
    //         printf("The Number %d is not divisible by 3 and 5",a);
    //     }
    //     if(a%3==0)
    //         {
    //         printf("The Number %d is divisible ONLY by 3",a);
    //         }    
    // }
    if(a%5==0 && a%3==0)
    {
        printf("The Number %d is divisible by 3 and 5",a);
    }
    if(a%5==0 && a%3!=0)
    {
        printf("The Number %d is divisible ONLY by 5",a);
    }
    if(a%5!=0 && a%3==0)
    {
        printf("The Number %d is divisible ONLY by 3",a);
    }
    if(a%5!=0 && a%3!=0)
    {
        printf("The Number %d is not divisible by 3 and 5",a);
    }
return 0;
}