#include<stdio.h>
void digit3(int);
int main(){
    int n;
    printf("Enter no of elements in an array: ");
    scanf("%d",&n);
    int arr[n];
    int* ptr = &arr[0];
    printf("Enter %d elements of the array :\n", n);
    for(int i = 0 ; i< n ; i++){
        scanf("%d", &arr[i]);
    }
    printf("The array elements are\n");
    for(int i = 0; i<n; i++){
        printf("%d ",*(arr+i));
    }
    int small = *ptr, largest = *ptr,sum = *ptr;
    for(int i = 1; i<n ; i++){
        if(small>*(arr+i)){
            small = *(arr+i); 
        }
        if(largest<*(arr+i)){
            largest = *(arr+i);
        }
        sum+= *(arr+i);
    }
    printf("\nThe Smallest element is: %d\n",small);
    printf("The Largest element is: %d\n",largest);
    printf("The Sum of the elements is: %d\n",sum);
     printf("Elements with 3 in any place are: ");
    for(int i = 0; i<n; i++){
        digit3(*(arr+i));
    }
}
void digit3(int x)
{
    int n = x;
    while(n != 0){
        if(n%10 == 3){
            printf("%d ",x);
            return;
        }
        n /= 10;
    }
    return;
}
