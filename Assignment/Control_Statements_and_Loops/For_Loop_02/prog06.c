// Write a Program to print table according to given numbers is even or odd.

#include <stdio.h>

void main() {

    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Table of %d:\n", number);

    if (number % 2 != 0) {
        for (int i = 10; i >= 1; i--) {
            printf("%d x %d = %d\n", number, i, number * i);
        }
    } else {
        for (int i = 1; i <= 10; i++) {
            printf("%d x %d = %d\n", number, i, number * i);
        }
    }
}