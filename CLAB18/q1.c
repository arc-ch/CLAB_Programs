#include <stdio.h>
int main()
{
    int num; 
    int *iptr;
    iptr=&num;
    printf("Enter a number: ");
    scanf("%d",iptr);
    printf("The number is: %d",*iptr);
    return 0;
}