#include <stdio.h>
struct Student {
    char name[50];
    int rollNumber;
    float gpa;
};

int main() {
    struct Student stu_num[5];

    for (int i = 0; i < 5; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", stu_num[i].name);
        printf("Roll Number: ");
        scanf("%d", &stu_num[i].rollNumber);
        printf("Marks: ");
        scanf("%f", &stu_num[i].gpa);
        printf("\n");
    }

    printf("Details of stu_num:\n");
    for (int i = 0; i < 5; i++) {
        printf("Student %d\n", i + 1);
        printf("Name: %s\n", stu_num[i].name);
        printf("Roll Number: %d\n", stu_num[i].rollNumber);
        printf("Marks: %.2f\n", stu_num[i].gpa);
        printf("\n");
    }
     int x = sizeof(struct Student);
    printf("Size of Structure : %d",x);

    return 0;
}