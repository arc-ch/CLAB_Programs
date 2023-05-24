#include <stdio.h>
int main(){
  char ch;
  int n,m,result; 
  float result1;
  printf("Enter two numbers and an operator :");
  scanf("%d %d %c", &n, &m, &ch);
  switch(ch)
  {
     case '+' : result= n+m;
                printf("The Addition is : %d",result);
                break;
     case '-' : result= n-m;
                printf("The Subtraction is %d", result);
                break;
     case '*' : result= n*m;
                printf("The Multiplication is %d",result);
                break;
     case '/' : result1= (float)n/m;
                printf("The Division is %f", result1);
                break;
     case '%' : result= n%m;
                printf("The Remainder is  %d", result);
                break;
     default  : printf("Invalid");
                break;
  }
  return 0;
}