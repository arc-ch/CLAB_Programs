#include<stdio.h>
int main (){
int x;
printf("Enter Your Marks: ");
scanf("%d",&x);
// Marks 90 - 100 : O Grade
// Marks 80 - 89 : E Grade
// Marks 70 - 79 : A Grade
// Marks 60 - 69 : B Grade
// Marks 50 - 59 : C Grade
// Marks 40 - 49 : D Grade
// Marks <40 : F Grade
if(x>=90 && x<=100)
    {
        printf("Your Grade is : O Grade");
    }
else if(x>=80 && x<90)
    {
        printf("Your Grade is : E Grade");
    }
else if(x>=70 && x<80)
    {
        printf("Your Grade is : A Grade");
    }
else if(x>=60 && x<70)
    {
        printf("Your Grade is : B Grade");
    }
else if(x>=50 && x<60)
    {
        printf("Your Grade is : C Grade");
    }
else if(x>=40 && x<50)
    {
        printf("Your Grade is : D Grade");
    }
else
    {
        printf("You Have Failed The Exam");
    }

return 0;

}

// GRADING SYSTEM USING SWITCH CASE=
// #include <stdio.h>
// int main() {
//     int marks;

//     printf("Enter your marks: ");
//     scanf("%d", &marks);

//     switch (marks/10) {
//         case 10:
//         case 9:
//             printf("Grade: O\n");
//             break;
//         case 8:
//             printf("Grade: E\n");
//             break;
//         case 7:
//             printf("Grade: A\n");
//             break;
//         case 6:
//             printf("Grade: B\n");
//             break;
//         case 5:
//             printf("Grade: C\n");
//             break;
//         case 4:
//             printf("Grade: D\n");
//             break;
//         default:
//             printf("Grade: F\n");
//             break;
//     }
//return 0;
// }