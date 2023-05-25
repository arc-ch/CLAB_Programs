#include <stdio.h>

void findTop3(int arr[], int size, int* first, int* second, int* third) {
    *first = *second = *third = arr[0];

    for (int i = 0; i < size; i++) {
        if (arr[i] > *first) {
            *third = *second;
            *second = *first;
            *first = arr[i];
        } else if (arr[i] > *second && arr[i] != *first) {
            *third = *second;
            *second = arr[i];
        } else if (arr[i] > *third && arr[i] != *second && arr[i] != *first) {
            *third = arr[i];
        }
    }
}

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter %d elements of the array: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int first, second, third;
    findTop3(arr, size, &first, &second, &third);

    printf("First highest element: %d\n", first);
    printf("Second highest element: %d\n", second);
    printf("Third highest element: %d\n", third);

    return 0;
}
