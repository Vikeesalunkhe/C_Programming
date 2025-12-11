/*
Write a program to print the reverse of given number.
Input : 12345
Outpout : 54321
*/

#include <stdio.h>

long reverse(long num) {


    long reversNum = 0;
    long lastDigit;
    while (num != 0) {
        lastDigit = num%10;
        reversNum = reversNum * 10 + lastDigit;
        num = num/10;
    }

    return reversNum;
}

void main() {

    long num;
    printf("Enter User Given Number : ");
    scanf("%ld", &num);

    printf("Reverse of %ld is %ld\n", num, reverse(num));

}