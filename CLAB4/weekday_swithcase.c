#include<stdio.h>
int main(){
    int ch;
    printf("Enter a day number (1-7): ");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1:
        printf("MONDAY");
        break;
    case 2:
        printf("TUESDAY");
        break;
    case 3:
        printf("WEDNESDAY");
        break;
    case 4:
        printf("THURSDAY");
        break;
    case 5:
        printf("FRIDAY");
        break;
    case 6:
        printf("SATURDAY");
        break;
    case 7:
        printf("SUNDAY");
        break;
    default:
        printf("No such day in a week.");
        break;
    }
return 0;
}