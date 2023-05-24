#include<stdio.h>  
int main()  
{  
    float x1, y1, x2, y2, x3, y3, m1, m2;  
  
    printf("Enter points (x1, y1:)");  
    scanf("%f %f", &x1, &y1);  
  
    printf("Enter points (x2, y2:)");  
    scanf("%f %f", &x2, &y2);  
  
    printf("Enter points (x3, y3:)");  
    scanf("%f %f", &x3, &y3);  
  
    m1 = (y2 - y1) / (x2 - x1);  
    m2 = (y3 - y2) / (x3 - x2);  
  
    if( m1 == m2)  
    {  
        printf("All 3 points lie on the same line\n");  
    }  
    else  
    {  
        printf("All 3 points do not lie on the same line\n");  
    }  
    return 0;  
}