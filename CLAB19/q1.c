#include <stdio.h>
#include<string.h>
struct student
   {
        int roll_no;
        char name[100];
   }; 
int main() {
               
    int x = sizeof(struct student);
    printf("Size of Structure : %d",x);

    struct student s1,s2,s3;

    s1.roll_no = 22053578;
    strcpy(s1.name,"Anushka");

    printf("\nRoll number and Name of Student 1= %d , %s",s1.roll_no,s1.name);

    s2.roll_no = 22053579;
    strcpy(s2.name,"Archit");

    printf("\nRoll number and Name of Student 2= %d , %s",s2.roll_no,s2.name);

    s3.roll_no = 22053580;
    strcpy(s3.name,"Aryan");

    printf("\nRoll number and Name of Student 3= %d , %s",s3.roll_no,s3.name);
    return 0;
}

// #include <stdio.h>
// #include <string.h>

// struct Student {
//     int rollNumber;
//     char name[50];
// }s1,s2,s3;

// int main() {
//     struct Student s1;
//     printf("Enter roll number 1: ");
//     scanf("%d", &s1.rollNumber);
//     printf("Enter name: ");
//     scanf("%s", s1.name);
//     struct Student s2;
//     printf("Enter roll number 2: ");
//     scanf("%d", &s2.rollNumber);
//     printf("Enter name: ");
//     scanf("%s", s2.name);
//     printf("Roll Number: %d\n", s1.rollNumber);
//     printf("Name: %s\n", s1.name);
//     printf("Roll Number: %d\n", s2.rollNumber);
//     printf("Name: %s\n", s2.name);
//     return 0;
// }