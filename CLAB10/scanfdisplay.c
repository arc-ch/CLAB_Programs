#include<stdio.h>
int main ()
{
    int n;
    printf("Enter the Size of Array: ");
    scanf("%d",&n);
    printf("Enter %d elements of the array: ", n);
    int A[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    printf("Elements of Array are:\n ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",A[i]);
    }
    return 0;
}