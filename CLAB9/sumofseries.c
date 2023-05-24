#include <stdio.h>
int main()
{
    int n, i;
    float x, sum=1, term=1, fact=1;
    printf("Enter the value of x: ");
    scanf("%f", &x);
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        fact = fact * i;
        term = term * x;
        sum = sum + (term / fact);
    }

    printf("The sum of the series is %f", sum);
    return 0;
}
