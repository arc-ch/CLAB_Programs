#include<stdio.h>
int main ()
{
    int n;
    printf("Enter The Size of Array: ");
    scanf("%d",&n);
    printf("Enter %d elements of Array: ", n);
    int A[n];
    int sum=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
        sum = sum + A[i];
    }
    printf("Sum of elements of the array is %d",sum);
    return 0;
}