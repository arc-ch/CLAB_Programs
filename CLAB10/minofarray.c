#include<stdio.h>
int main () 
{
    int n;
    printf("Enter The Size of Array: ");
    scanf("%d",&n);
    printf("Enter %d elements of Array: ", n);
    int A[n];
    int min= A[0];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
         if(min > A[i])
        {
            min = A[i];
        }
    }
    printf("Smallest number of the array is %d",min);
    return 0;
}