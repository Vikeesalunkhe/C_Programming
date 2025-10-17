#include <stdio.h>

void main() {

    char grade = 'B';

    switch (grade) {

        case 'A': {
            printf("Excellent\n");
        }
        break;

        case 'B': {
            printf("Very Good\n");
        }
        break;

        case 'C': {
            printf("Good\n");
        }
        break;

        case 'D': {
            printf("Pass\n");
        }
        break;

        case 'F': {
            printf("Fail\n");
        }
        break;

        default:
            printf("Invalid Grade\n");

    }
}