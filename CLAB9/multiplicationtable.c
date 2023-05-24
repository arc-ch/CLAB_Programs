// #include <stdio.h>
// int main()
// {
//     int i, j;
    
//     for(i=1; i<=10; i++)
//     {
//         printf("Multiplication table of %d:\n", i);
//         for(j=1; j<=10; j++)
//         {
//             printf("%d x %d = %d\n", i, j, i*j);
//         }
//         printf("\n");
//     }
    
//     return 0;
// }

#include <stdio.h>
int main()
{
    int i, j, num;
    
    printf("Enter a number to display its multiplication table: ");
    scanf("%d", &num);
    
    for(i=1; i<=10; i++)
    {
        printf("%d x %d = %d\n", num, i, num*i);
    }
    return 0;
}
