// Write a program to find the naximum between two distinct numbers

#include <stdio.h>

void main() {

    int num01, num02;

    printf("Enter num 01 : ");
    scanf("%d", &num01);
    printf("Enter num 02 : ");
    scanf("%d", &num02);

    if (num01>num02) {

        printf("%d is greater that %d\n", num01, num02);
    } else {

        printf("% d is greater that %d\n", num02, num01);
    }
}