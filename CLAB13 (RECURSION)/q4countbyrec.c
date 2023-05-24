#include<stdio.h>
int count(int n) {
    if (n < 10) {
        return 1;
    } else {
        return 1 + count(n/10);
    }
}
int main() {
    int n;
    printf("Enter a Number: ");
    scanf("%d", &n);
    count(n);
    printf("Number of Digits in Number are = %d", count(n));
    return 0;
}


// #include<stdio.h>
// int count(int n) {
//     int c = 0;
//     if (n < 10) {
//         return 1;
//     } else {
//         c++;
//         return c+count(n/10);
//     }
// }
// int main() {
//     int n, c;
//     printf("Enter a Number: ");
//     scanf("%d", &n);
//     c = count(n);
//     printf("Number of Digits in Number are = %d", c);

//     return 0;
// }