//Write a Program to print the Count of digit in a given Number.
//input : 10202
//output : 5

#include <stdio.h>

int digitCount(long num) {

    int count = 0;
    while (num != 0) {

        num = num/10;
        count++;
    }

    return count;
}

void main() {

    long num;
    printf("Enter User Value : ");
    scanf("%ld", &num);

    int digit_count = digitCount(num);
    printf("Count of digit is %ld is %d\n", num, digit_count);
}