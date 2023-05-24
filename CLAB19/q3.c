#include <stdio.h>
#include <string.h>

struct student {
    int roll_no;
    char name[100];
};

int main() {
    int x = sizeof(struct student);
    printf("Size of Structure : %d\n", x);

    struct student s1, s2, s3;
    struct student* ptr;

    ptr = &s1;
    ptr->roll_no = 22053578;
    strcpy(ptr->name, "Anushka");
    printf("Roll number and Name of Student 1: %d, %s\n", (&s1)->roll_no, ptr->name);

    ptr = &s2;
    ptr->roll_no = 22053579;
    strcpy(ptr->name, "Archit");
    printf("Roll number and Name of Student 2: %d, %s\n", ptr->roll_no, ptr->name);

    ptr = &s3;
    ptr->roll_no = 22053580;
    strcpy(ptr->name, "Aryan");
    printf("Roll number and Name of Student 3: %d, %s\n", ptr->roll_no, ptr->name);

    return 0;
}
