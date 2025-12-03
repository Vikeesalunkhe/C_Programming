//Write  a program to check whether they are pythagorean triplet or not.

#include <stdio.h>


void main() {

    int a, b, c;
    printf("Enter three sides of triangle : ");
    scanf("%d %d %d", &a, &b, &c);

    if ((a * a) + (b * b) == (c * c) || (b * b) + (c * c) == (a * a) || (c * c) + (a * a) == (b * b)) {

        printf("Given sides are Pythagorean Triplet\n");
    } else {

        printf("Given sides are not Pythagorean Triplet\n");
    }
}