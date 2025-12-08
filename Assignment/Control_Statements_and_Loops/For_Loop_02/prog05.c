//Write a Program to claculate product of even numbers between two numbers.

#include <stdio.h>

void main() {

    int start, end;
    printf("Enter Start Range : ");
    scanf("%d", &start);
    printf("Enter End Range : ");
    scanf("%d", &end);

    int product = 1;
    for (int i = start; i<=end; i++) {

        if (i%2 == 0) {
            product *= i;
        }
    }


    printf("Product of even numbers between range of %d to %d is %d\n", start, end, product);
}