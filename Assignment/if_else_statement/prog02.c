// write to check num is divisible by 5 or 10 

#include <stdio.h>

void main() {

    int num;
    printf("Enter Num. : ");
    scanf("%d", &num);

    if (num % 5 == 0 || num % 10 == 0) {

        printf("%d is Divisible by 5 or 10\n", num);
    } else {

        printf("%d is Not Divisible by 5 or 10\n", num);
    }
}