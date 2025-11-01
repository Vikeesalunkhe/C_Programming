//Write a program to check is positive or negative number

#include <stdio.h>

void main() {

    int num;
    printf("Enter user input : ");
    scanf("%d", &num);

    if (num > 0) {

        printf("User Entered No. %d is Positive Number \n", num);
    }
    else if (num == 0) {

        printf("User Entered No. %d is Considered\n", num);
    }
     else {

        printf("User Entered n0. %d is Negative\n", num);
    }
}