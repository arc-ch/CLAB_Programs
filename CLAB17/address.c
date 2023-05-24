#include<stdio.h>
int main (){
int a=87;
float b=4.5;
int *p1=&a;
float *p2=&b;
printf("%p\n",&a); //address of a
printf("%p\n", p1); //address of a
printf("%p\n",p2); //address of b
printf("%p\n",&p1); //address of p1
printf("%p\n",&p2);//address of p2
printf("%d\n",*p1); //value stored at the address pointed to by p1 //deref
printf("%d\n",*&a); //value at address of a //deref
return 0;
}
