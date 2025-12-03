// Write a c program , have to write real time example of nested if else statement.

#include <stdio.h>
void main() {

    int age;
    char gender;
    printf("Enter your age : ");
    scanf("%d", &age);
    printf("Enter your gender (M/F) : ");
    scanf(" %c", &gender);      

    if (gender == 'M' || gender == 'm') {

        if (age >= 21) {

            printf("Eligible for marriage\n");
        } 
        else {

            printf("Not Eligible for marriage\n");
        }
    } 
    else if (gender == 'F' || gender == 'f') {

        if (age >= 18) {

            printf("Eligible for marriage\n");
        } 
        else {

            printf("Not Eligible for marriage\n");
        }
    } 
    else {

        printf("Invalid Gender Input\n");
    }
}                 