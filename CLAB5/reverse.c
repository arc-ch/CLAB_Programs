#include<stdio.h>
int main(){
    int n,p;
    printf("Enter The Number: ");
    scanf("%d",&n); 
    while(n!=0) 
    {
        p=n%10;
        printf("%d",p);
        n=n/10;
    }
}