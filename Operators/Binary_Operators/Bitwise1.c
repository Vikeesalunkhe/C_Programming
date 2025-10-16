//Bitwise Operators

/*
    & : Bitwise AND
    | : Bitwise OR
    ^ :  Bitwise XOR
    << : Right Shift
    >> : Left Shift
    ~ : Bitwise NOT
*/

#include <stdio.h>

void main() {

    int x = 10;
    int y = 20;

    printf("x & y : %d\n", x&y);         // 1010 & 10100 = 0 : 0
    printf("x | y : %d\n", x|y);         // 1010 | 10100 = 11110 : 30
    printf("x ^ y : %d\n", x^y);         // 1010 ^ 10100 = 11110    : 30
    printf("x << 2 : %d\n", x<<2);       // 1010 << 2 = 101000  : 40
    printf("y >> 2 : %d\n", y>>2);       // 10100 >> 2 = 101    : 5
    printf("~x : %d\n", ~x);             // ~1010 = 0101 (in 4 bits) = -11 (in 32 bits) : -11
}