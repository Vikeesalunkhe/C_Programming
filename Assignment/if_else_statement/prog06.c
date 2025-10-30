// write a program to check whether a number is divisible by 3 and 7

#include <stdio.h>

void main() {

    int num;

    printf("Enter user input : ");
    scanf("%d", &num);

    if (num % 3 == 0 && num % 7 == 0) {

        printf("%d is divisible by 3 and 7\n", num);
    } else {

        printf("%d is not divisible by 3 and 7\n", num);
    }
}