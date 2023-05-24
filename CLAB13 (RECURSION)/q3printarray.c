#include <stdio.h>
// #define MAX_SIZE 100
void printArray(int arr[], int n, int i) {
    if (i < n) {
        printf("%d ", arr[i]);
    printArray(arr, n, i+1);
    }
}

int main() {
    int arr[100];
    int n, i;
    printf("Enter the Size of the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: ");

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("The elements of the array are: ");
    printArray(arr, n, 0);
    return 0;
}