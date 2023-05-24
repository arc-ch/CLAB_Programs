#include <stdio.h>
int main()
{
    int i, num;
    int fact = 1;
    for(num=1; num<=10; num++)
    {
        fact = 1;
        for(i=1; i<=num; i++)
        {
            fact *= i;
        }
        printf("Factorial of %d is %d\n", num, fact);
    }
    return 0;
}
