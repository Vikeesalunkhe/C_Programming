// write to program check num. is divisible by 7 or less than or greater than 21

#include <stdio.h>

void main() {

    int num;

    printf("Enter user input : ");
    scanf("%d", &num);

    if (num % 7 == 0 && num > 21) {

        printf("%d is divisible bt 7 and greater than 21\n", num);
    } else if (num % 7 != 0 && num >21) {

        printf("%d is not divisible bt 7 and greater than 21\n", num);

    } else if (num % 7 == 0 && num < 21) {

        printf("%d is divisible bt 7 and less than 21\n", num);

    } else {

        printf("%d is not divisible bt 7 and less than 21\n", num);

    }
}