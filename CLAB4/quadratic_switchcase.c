#include <stdio.h>
#include <math.h>
int main() {
    float a, b, c, disc, root1, root2;
    int type;
    printf("Enter the values of a, b, and c: ");
    scanf("%f %f %f", &a, &b, &c);
    disc = b*b - 4*a*c;
    if (a == 0) 
    {
        printf("Not a Quadratic Equation\n");
    }
// SWITCH CASE- IT IS USED FOR MULTI WAY CONTROL STATEMENTS 
// WHICH HELPS US TO MAKE CHOICE AMONG MANY ALTERNATIVES

    else if (disc > 0) 
    {
        type = 1; // Real and distinct roots
    }
    else if (disc == 0) 
    {
        type = 2; // Real and equal roots
    } 
    else 
    {
        type = 3; // Imaginary roots
    }
    switch (type) {
        case 1: // Real and distinct roots
            root1 = (-b + sqrt(disc)) / (2*a);
            root2 = (-b - sqrt(disc)) / (2*a);
            printf("Roots are real and distinct.\n");
            printf("Root 1 = %f\n", root1);
            printf("Root 2 = %f\n", root2);
            break;

        case 2: // Real and equal roots 
            root1 = root2 = -b / (2*a); //DISC=0
            printf("Roots are real and equal.\n");
            printf("Root 1 = Root 2 = %f\n", root1);
            break;

        case 3: // Imaginary roots
            root1 = -b / (2*a); //REAL
            root2 = sqrt(-disc) / (2*a); //IMAGINARY
            printf("Roots are imaginary.\n");
            printf("Root 1 = %f + (%f)i\n", root1, root2);
            printf("Root 2 = %f - (%f)i\n", root1, root2);
            break;
    }
return 0;
}