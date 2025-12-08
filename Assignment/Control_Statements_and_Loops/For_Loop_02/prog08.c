//a B c D e

#include <stdio.h>

void main() {

    char upper = 'A';
    char lower = 'a';

    for (int i = 1; i <=26; i++) {
        if (i % 2 != 0) {
            printf("%c ", lower);
        } else {
            printf("%c ", upper);
        }
        upper++;
        lower++;
    }
    printf("\n");
}