#include <stdio.h> 
int main() {  
    int x, y;  
    printf("Enter Two Integers:");  
    scanf("%d %d", &x, &y);  
    switch(x > y) 
    {     
        case 1: printf("%d is Greater", x);    //true(1) // 
                break;  

        case 0: printf("%d is Greater", y);  //true(0)//   
                break;  
    }  
return 0;
}