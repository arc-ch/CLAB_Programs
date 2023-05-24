#include<stdio.h>
int main (){
    
    int h,m,s;
    printf("Enter the number of seconds;");
    scanf("%d",&s);
    h=s / 3600; //quotient
    s=s % 3600; //remainder
    m=s / 60;
    s=s % 60;
    printf("%d Hours ", h);
    printf("%d Minutes ", m);
    printf("%d Seconds ", s);
return 0;
}

// #include<stdio.h>
// int main (){
//     int H,h,m,M,S,s;
//     printf("Enter the number of seconds:");
//     scanf("%d",&s);
//     H=s/3600; //quotient
//     h=s%3600; //remainder
//     M=h/60;
//     S=h%60;
//     printf("%d Hours, ", H);
//     printf("%d Minutes, ", M);
//     printf("%d Seconds", S);
// return 0;
// }