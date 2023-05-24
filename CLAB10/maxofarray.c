#include<stdio.h>
int main (){
    int n;
    printf("Enter The Size of Array: ");
    scanf("%d",&n);
    printf("Enter %d elements of Array: ", n);
    int A[n];
    for(int i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
   int max= A[0]; 
    for(int i=0;i<n;i++) {
        if(max < A[i]){
            max = A[i];
        }
    }
    printf("Largest number of the array is %d",max);
    return 0;
}



// #include<stdio.h>
// int main ()
// {
//     int n;
//     printf("Enter The Size of Array: ");
//     scanf("%d",&n);
//     printf("Enter %d elements of Array: ", n);
//     int A[n];
//     int max= A[0];
//     for(int i=1;i<n;i++)
//     {
//         scanf("%d",&A[i]);
//          if(max < A[i])
//         {
//             max = A[i];
//         }
//     }
//     printf("Largest number of the array is %d",max);
//     return 0;
// }