#include <stdio.h>
int main() {
    int arr[100];
    int n;
    printf("Enter the length of the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int brr[100];
    int index = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 != 0) 
        {
            brr[index] = arr[i];
            index++;
        }
    }
     for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) 
        {
            brr[index] = arr[i];
            index++;
        }
    }

    printf("Elements in the modified array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", brr[i]);
    }
    
return 0;
}

// #include <stdio.h>
// int main() {
//     int arr[100];
//     int n;
//     printf("Enter the length of the array: ");
//     scanf("%d", &n);

//     printf("Enter the elements of the array: ");
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }

//     //ODD
//     for (int i = 0; i < n; i++) {
//         if (arr[i] % 2 != 0) 
//         {
//             printf("%d ", arr[i]);
//         }
//     }
    
//     //EVEN
//     for (int i = 0; i < n; i++) {
//         if (arr[i] % 2 == 0) 
//         {
//             printf("%d ", arr[i]);
//         }
//     }
//     return 0;
// }

// #include <stdio.h>
// void printOddEven(int arr[], int n) {
//     //ODD
//     for (int i = 0; i < n; i++) {
//         if (arr[i] % 2 != 0) {
//             printf("%d ", arr[i]);
//         }
//     }
//     //EVEN
//     for (int i = 0; i < n; i++) {
//         if (arr[i] % 2 == 0) {
//             printf("%d ", arr[i]);
//         }
//     }
// }

// int main() {
//     int arr[100];
//     int n;
//     printf("Enter the length of the array: ");
//     scanf("%d", &n);

//     printf("Enter the elements of the array: ");
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }

//     printOddEven(arr, n);

//     return 0;
// }
