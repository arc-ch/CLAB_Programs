#include <stdio.h>
int main() {
    int arr[100];
    int brr[100];
    int n, start, end;
    printf("Enter the length of the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Range
    printf("Enter the start of the range: ");
    scanf("%d", &start);
    printf("Enter the end of the range: ");
    scanf("%d", &end);
    int count=0;
    //Inside range
    for (int i = 0; i < n; i++) {
        if (arr[i] >= start && arr[i] <= end) {
            brr[count] = arr[i];
			count++;
        }
    }
    
    //Outside range
    for (int i = 0; i < n; i++) {
        if (arr[i] < start || arr[i] > end) {
             brr[count] = arr[i];
			count++;
        }
    }
    
    printf("The new array is: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", brr[i]);
    }
    printf("\n");
return 0;
}

// //FUNCTION
// #include <stdio.h>

// void printElementsInRange(int arr[], int n, int start, int end) {
//     // Inside range
//     for (int i = 0; i < n; i++) {
//         if (arr[i] >= start && arr[i] <= end) {
//             printf("%d ", arr[i]);
//         }
//     }
    
//     // Outside range
//     for (int i = 0; i < n; i++) {
//         if (arr[i] < start || arr[i] > end) {
//             printf("%d ", arr[i]);
//         }
//     }
// }

// int main() {
//     int arr[100];
//     int n, start, end;

//     printf("Enter the length of the array: ");
//     scanf("%d", &n);

//     printf("Enter the elements of the array: ");
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }

//     printf("Enter the start of the range: ");
//     scanf("%d", &start);

//     printf("Enter the end of the range: ");
//     scanf("%d", &end);

//     printElementsInRange(arr, n, start, end);

//     return 0;
// }
