// write a program to print grade based mark

#include <stdio.h>

void main() {

    int mark;

    printf("Enter Mark : ");
    scanf("%d", &mark);

    if (mark >= 90 && mark <= 100) {

        printf("Grade A+\n");
    } else if (mark >= 80 && mark < 90) {

        printf("Grade A\n");
    } else if (mark >= 70 && mark < 80) {

        printf("Grade B+\n");
    } else if (mark >= 60 && mark < 70) {

        printf("Grade B\n");
    } else if (mark >= 50 && mark < 60) {

        printf("Grade C\n");
    } else if (mark >= 40 && mark < 50) {

        printf("Grade D\n");
    } else if (mark >= 0 && mark < 40) {

        printf("Grade F\n");
    } else {

        printf("Invalid Mark\n");
    }
}