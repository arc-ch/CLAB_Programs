#include <stdio.h>
int main(){
    int num, reversed, diff;
    printf("Enter a three-digit number: ");
    scanf("%d", &num);
    while (num != 0)
    {
        reversed = 0;
        int temp = num;
        while (temp > 0)
        {
            reversed = reversed * 10 + temp % 10;
            temp /= 10;
        }
        diff = num - reversed;
        printf("%d - %d = %d\n", num, reversed, diff);
        if (diff > 0)
        {
            num = diff;
        }
        else
        {
            temp = -diff;
            reversed = 0;
            while (temp > 0)
            {
                reversed = reversed * 10 + temp % 10;
                temp /= 10;
            }
            num = reversed;
        }
    }
    return 0;
}
