//Assignment Operators

#include <stdio.h>

void main() {

    int x = 10;
    
    x += 5;                   // x = x + 5
    printf("x = %d\n", x);   //15

    x -= 3;                   // x = x - 3
    printf("x = %d\n", x);   //12   

    x *= 2;                   // x = x * 2
    printf("x = %d\n", x);   //24

    x /= 4;                   // x = x / 4
    printf("x = %d\n", x);   //6

    x %= 4;                   // x = x % 4
    printf("x = %d\n", x);   //2
}