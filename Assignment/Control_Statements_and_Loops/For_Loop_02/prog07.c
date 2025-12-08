//1 B 3 D 5

#include <stdio.h>

void main() {

    char letter = 'A';

    for (int i = 1; i <=26; i++) {
        if (i % 2 != 0) {
            printf("%d ", i);
        } else {
            printf("%c ", letter);
        }
        letter++;
    }
    printf("\n");
}