#include <stdio.h>

struct stud {
    int roll;
    char name[50];
    char branch[10];
};

int main() {

    struct stud* sptr;

    printf("Enter Roll Number: ");
    scanf("%d", &(sptr->roll));

    printf("Enter Name: ");
    scanf("%s", sptr->name);

    printf("Enter Branch: ");
    scanf("%s", sptr->branch);

    printf("\nStudent Details:\n");
    printf("Roll Number: %d\n", sptr->roll);
    printf("Name: %s\n", sptr->name);
    printf("Branch: %s\n", sptr->branch);

    return 0;
}
