// check if triangle is valid or not

#include <stdio.h>

void main() {

    int angle01, angle02, angle03, sum;

    printf("Enter Angle 01 : ");
    scanf("%d", &angle01);
    printf("Enter Angle 02 : ");
    scanf("%d", &angle02);
    printf("Enter Angle 03 : ");
    scanf("%d", &angle03);

    sum = angle01 + angle02 + angle03;

    if (sum == 180 && angle01 > 0 && angle02 > 0 && angle03 > 0) {

        printf("Triangle is Valid\n");
    } else {

        printf("Triangle is Not Valid\n");
    }
}