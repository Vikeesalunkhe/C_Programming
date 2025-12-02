// Write the output for the following statements.

#include <stdio.h>

void main() {

    int x = 10;

    printf("%d\n", x++ + --x - x++);    //10 + 10 - 10 = 10
    x = 10;
    printf("%d\n", --x + x-- - x++ + ++x);    //9 + 9 - 8 + 9 = 19
    x = 10;
    printf("%d\n", x++ + x-- - --x + ++x);    //10 + 11 - 9 + 10 = 22
    x = 10;
    printf("%d\n", ++x + x++ - x-- + --x);    //11 + 11 - 12 + 11 = 21

}