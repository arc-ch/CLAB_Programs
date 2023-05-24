#include <stdio.h>
int main() {
    int n, i;
    int fact = 1;
    printf("Enter a number to get factorial: ");
    scanf("%d", &n);
    if (n < 0) {
        printf("Factorial of a negative number doesn't exist.");}
    else {
        for (i = 1; i <= n; i++) {
        fact= fact*i;}
        printf("Factorial of %d is %d", n, fact);
    }
    return 0;
}


// #include <stdio.h>
// int main()
// {
//     int i, num;
//     int fact = 1;
//     for(num=1; num<=10; num++)
//     {
//         fact = 1;
//         for(i=1; i<=num; i++)
//         {
//             fact *= i;
//         }
//         printf("Factorial of %d is %d\n", num, fact);
//     }
//     return 0;
// }
