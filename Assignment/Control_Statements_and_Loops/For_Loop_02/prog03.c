//Print Upper Alphabets excluding vowels.

#include <stdio.h>

void Alphabets();

void main() {
    Alphabets();
}


void Alphabets() {

    printf("Uppercase Alphabets excluding Vowels:\n");

    for (char ch = 'A'; ch <= 'Z'; ch++) {
        if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            continue;
        }
        printf("%c\n", ch);
    }


}