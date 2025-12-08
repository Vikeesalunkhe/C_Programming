//Write a Program to print table of user given given number.

#include <stdio.h>

void print_table(int num) {

    printf("Table of %d\n", num);
    for (int i = 1; i<=10; i++) {
        printf("%d\n", num*i);
        }
    }

void main() {

    int num;
    printf("Enter Number : ");
    scanf("%d", &num);
    print_table(num);
}

