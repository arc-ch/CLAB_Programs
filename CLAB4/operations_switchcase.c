#include <stdio.h>
int main(){
    float n1, n2, result;
    int choice; //CHOICE IS ALWAYS INTEGER OR CHAR

    printf("Enter the first number: ");
    scanf("%f", &n1);
    printf("Enter the second number: ");
    scanf("%f", &n2);

    printf("Choose an operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    switch(choice) 
    {
        case 1:
            result = n1 + n2;
            printf("%f + %f = %f\n", n1, n2, result);
            break;
        case 2:
            result = n1 - n2;
            printf("%f - %f = %f\n", n1, n2, result);
            break;
        case 3:
            result = n1 * n2;
            printf("%f * %f = %f\n", n1, n2, result);
            break;
        case 4:
            if (n2 == 0) {
                printf("Error: Cannot divide by zero!\n");
            }
            else {
                result = n1 / n2;
                printf("%f / %f = %f\n", n1, n2, result);
            }
            break;
        default:
            printf("Invalid choice! Please enter a number between 1 and 4.\n");
            break;
    }
return 0;
}