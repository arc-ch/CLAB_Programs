#include <stdio.h>
void printArray(int[], int);
int main()
{
    int arr[]={0,1,1,0,0,0,1,0,1,0,0,1,0,1,0,0,0,1,1,1};
    printf("Enter The Number:\n");
    int Fill;
    scanf("%d", &Fill);
    printf("The array before entries:\n");
    printArray(arr, 20);
    for (int i = 0; i < 20; i++)
    {
        if (Fill == 0)
        {
            break;
        }
        if (arr[i] == 0)
        {
            arr[i] = 1;
            Fill--;
        }
    }
    printf("Now Array after entries is: \n");
    printArray(arr,20);
    return 0;
}
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}