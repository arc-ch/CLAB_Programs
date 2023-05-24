#include <stdio.h>
int main() {
    float n1, n2, result;
    int choice;

    printf("Enter the first number: ");
    scanf("%f", &n1);
    printf("Enter the second number: ");
    scanf("%f", &n2);

    printf("Choose an operation:\n");
    printf("1- Addition\n");
    printf("2- Subtraction\n");
    printf("3- Multiplication\n");
    printf("4- Division\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    if (choice == 1) 
       {
        result = n1 + n2;
        printf("%f + %f = %f\n", n1, n2, result);
       }

    if (choice == 2) 
        {
        result = n1 - n2;
        printf("%f - %f = %f\n", n1, n2, result);
        }
    
    if (choice == 3) 
        {
        result = n1 * n2;
        printf("%f * %f = %f\n", n1, n2, result);
        }

    if (choice == 4) 
            {
            if (n2 == 0)
                 {
                printf("Invalid: Cannot divide by zero!\n");
                 } 
            else 
                 {
                 result = n1 / n2;
                 printf("%f / %f = %f\n", n1, n2, result);
                 }
            }
    if(choice>4) 
    {
    printf("Invalid choice! Please enter a number between 1 and 4 only.\n");
    }
    return 0;
}
