// #include<stdio.h>
// int main(){
//     int arr[] = {1,2,3,4,5};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int c = sizeof(arr[0]);
//     for(int i = 0; i< n; i++){
//         printf("%d ",*((arr) + i));
//     }
//     printf("\n");
// }

// WAP to take user input array and print the elements by the use of pointers
#include <stdio.h>
int main()
{
    int n;
    printf("Enter size of array:\n");
    scanf("%d", &n);
    int A[n];
    int *ptr=&A[0];
    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d of array\n", i + 1);
        scanf("%d", &A[i]);
    }
    printf("Elements of array:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(ptr)); // printf("%d ", *(A + i))
        *ptr++;                //----
    }
}