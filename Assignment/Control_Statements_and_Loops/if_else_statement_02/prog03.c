// Write a program to check given year is leap year or not.

#include <stdio.h>

void main() {

    int year;
    printf("Enter Year Name : ");
    scanf("%d", &year);

    if (year % 4 == 0) {
        
        if (year % 100 == 0) {

            if (year % 400 == 0) {

                printf("%d is Leap Year\n", year);
            } else {

                printf("%d is not Leap Year\n", year);
            }
        } else {
            
            printf("%d is Leap Year\n", year);
        }
    } else {

        printf("%d is not leap year\n", year);
    }

}