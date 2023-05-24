#include<stdio.h>
int main(){
    int n;
    int ld=0;
    printf("Enter The Number: ");
    scanf("%d",&n);
    int product=1;
    while(n>0){
        ld=n%10;
        product= product * (ld);
        n=n/10;
    }
    printf("The Product Of digits is %d",product);
    return 0;
}