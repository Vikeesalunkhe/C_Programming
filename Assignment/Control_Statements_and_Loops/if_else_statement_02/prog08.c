// Write to program to check student passed with first class, second and pass.

#include <stdio.h>

void main() {

    int percent;
    printf("Enter percent : ");
    scanf("%f", &percent);

    if (percent >= 60) {

        printf("First Class\n");
    }
    else if (percent >= 50) {

        printf("Second Class\n");
    }
    else if (percent >= 35) {

        printf("Pass Class\n");
    }
    else {

        printf("Fail\n");
    }
}