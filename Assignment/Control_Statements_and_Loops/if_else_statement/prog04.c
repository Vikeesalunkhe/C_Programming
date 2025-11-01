// write a program check user is eligible for votting

#include <stdio.h>

void main() {

    int age;

    printf("Enter User Age : ");
    scanf("%d", &age);

    if (age >= 18) {

        printf("Eligible for voting\n");
    }
    else {

        printf("Not Eligiblr for voting\n");
    }
}