#include<stdio.h>
int main()
{
    int r,P,R;
    printf("Enter money in paise: ");
    scanf("%d",&r);
    R=r/100;
    P=r%100;
    printf("The entered money in rupee and paise equivalent is: %d",R);
    printf("rupees and %d",P);
    printf("paise");

    return 0;
}