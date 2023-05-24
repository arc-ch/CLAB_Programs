#include <stdio.h>
int main(){
    int i, j, n;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        // spaces in decreasing order of row //
        for(j=1; j<=n-i; j++){  //or j<=n-1//
            printf(" ");
        }
        //star in increasing order of row //
        for(j=1; j<=i; j++){
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