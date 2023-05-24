#include <stdio.h>
int main(){
    int i, j, k, n;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n-i; j++)
        {
            printf(" ");
        }
        for(j=1; j<=i; j++)
        {
            printf("*");
        }                      
        printf("\n");
    }
    for(int i=1;i<=n;i++)
    {
        for(j=1;j<=n-1;j++)
        {
            printf(" ");
        }
        for(j=1;j<=n+1-i;j++)      // for(j=i;j<=n;j++) 
        {
            printf("*");
        }
        printf("\n");

    }
    return 0;
}

//     *
//    **
//   ***
//  ****
// *****
//     *****
//     ****
//     ***
//     **
//     *