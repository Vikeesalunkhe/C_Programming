// Write a program to check a given char is vowel or consonant.

#include <stdio.h>
#include <string.h>

void main() {

    char letter;
    printf("Enter char : ");
    scanf("%c", &letter);

    if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u') {

        printf("%c is vowel\n", letter);
    }
    else if (letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U') {

        printf("%c is vowel\n", letter);

    } else {

        printf("%c is consonant\n", letter);
    }


}