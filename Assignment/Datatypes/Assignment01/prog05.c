// Write a program to sawp two numbers,

#include <stdio.h>

void main() {
    int num1, num2, temp;
    num1 = 10;
    num2 = 20;

    printf("Before Swapping : num1 = %d, num2 = %d\n", num1, num2);

    temp = num1;
    num1 = num2;
    num2 = temp;
    printf("After Swapping : num1 = %d, num2 = %d\n", num1, num2);
}