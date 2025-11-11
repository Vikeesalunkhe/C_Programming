// write a program to check whether the given number is the range of the 1 to 1000 or not

#include <stdio.h>

void main() {

    int num;
    printf("Enter Num : ");
    scanf("%d", &num);

    if ((num >= 1) && (num <= 1000)) {

        printf("%d is range of 1 to 1000\n", num);
    } else {

        printf("%d is out of range of 1 to 1000\n", num);
    }
}
