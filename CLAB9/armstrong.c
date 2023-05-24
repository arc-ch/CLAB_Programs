#include<stdio.h>  
 int main()
 {    
    int n,rem,sum=0,temp;    
    printf("Enter a Number: ");    
    scanf("%d",&n);    
    temp=n;   
    while(n>0)    
    {    
    rem=n%10;   //rem=remainder
    sum=sum+(rem*rem*rem);    
    n=n/10;    
    }    
    if(temp==sum)    
       printf("Given Number is an Armstrong  number ");    
    else    
       printf("Given Number is not an armstrong number");    
return 0;  
}  